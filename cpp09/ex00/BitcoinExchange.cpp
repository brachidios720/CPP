#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(){

}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src) : map(src.map) {

}


BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other){

    if(this != &other)
        *this = other;
    return(*this);
}

BitcoinExchange::~BitcoinExchange(){


}

void BitcoinExchange::loadmap(const std::string &input){

    std::ifstream file(input);
    if(!file){
        std::cerr << "Error the program cannot open Bitcoin data file" << std::endl; 
        return;
    }

    std::string line;
    getline(file, line);

    while(getline(file, line)){
        std::stringstream ss(line);
        std::string date, price;
        if(getline(ss, date, ',') && getline(ss, price)){
            try{
                map[date] = std::stof(price);
            } catch(const std::invalid_argument &){
                std::cerr << "Error invalide price in Bitcoin data (not a number)";
            } catch(const std::out_of_range&){
                std::cerr << "Error invalide price in Bitcoin data (number too large)";
            }
        }
    }
}
static bool estBissextile(int annee) {
    return (annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0);
}

static bool dateValide(int jour, int mois, int annee) {
    int joursParMois[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mois == 2 && estBissextile(annee)) {
        joursParMois[2] = 29;
    }
    if (mois < 1 || mois > 12){
        return(false);
    }
    if (jour < 1 || jour > joursParMois[mois]){
        return(false);
    }
    return true;
}

static bool checkDateFormat(const std::string  &date){
    
    for (int i = 0; i < 4; i++){
        if(!isdigit(date[i])){
            return(false);
        }
    }
    for (int i = 5; i < 7; i++){
        if(!isdigit(date[i])){
            return(false);
        }
    }
    for (int i = 8; i < 10; i++){
        if(!isdigit(date[i])){
            return(false);
        }
            
    }
    return(true);
}

static bool checkDate(const std::string &date){

    if(!checkDateFormat(date)){
        std::cerr << "Format of the date is invalide " << std::endl;
        return(false);
    }

    int years = atoi(date.substr(0, 4).c_str());
    int month = atoi(date.substr(5, 2).c_str());
    int day = atoi(date.substr(8, 2).c_str());

    
    if(date[4] != '-' || date[7] != '-'){
        std::cerr << "invalide file format in this line "  << date << std::endl; 
        return(false);
    }

    if(!dateValide(day, month, years)){
        std::cerr << "this date " << day << "-" << month << "-" << years << " is invalide date" << std::endl;
        return(false);
    }
    return(true);
}

static bool checkNumber(const std::string &price){

    if(price.empty()){
        std::cerr << "Error no value in the 'value' part" << std::endl;
        return(false);
    }
    bool hasDecimal = false;
    for (size_t i = 0; i < price.length(); i++) {
        if (price[i] == '.') {
            if (hasDecimal) {
                std::cerr << "Error invalid number format " << price << std::endl;
                return false;
            }
            hasDecimal = true;
        } 
        else if (!isdigit(price[i])) {
            std::cerr << "Error invalid character in number " << price << std::endl;
            return false;
        }
    }

    float number = atof(price.c_str());

    if (number < 0) {
        std::cerr << "Error: not a positive number" << std::endl;
        return false;
    }
    if (number > INT_MAX) {
        std::cerr << "Error: too large a number" << std::endl;
        return false;
    }
    return true;
}


void BitcoinExchange::loadData(const std::string &data){

    std::ifstream file(data);
    if(!file){
        std::cerr << "Error the program connot open the user data file" << std::endl;
        return;
    }

    std::string line;
    getline(file, line);
    while(getline(file, line)){
        std::stringstream ss(line);
        std::string date, price;
        getline(ss, date, '|');
        if(!checkDate(date)){
            continue;
        }
        getline(ss, price);
        price.erase(0, price.find_first_not_of(" "));
        if(!checkNumber(price)){
            continue;
        }
        float number = atof(price.c_str());

        std::map<std::string, float>::iterator it = map.lower_bound(date);
        if(it == map.begin()){
            std::cerr << "Error: no data found for the requested date" << std::endl;
            continue;
        }
        --it;

        float rate = it->second;
        std::cout << date << " => " << price << " = " << number * rate << std::endl;
    }
}
