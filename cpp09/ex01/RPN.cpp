#include "RPN.hpp"


RPN::RPN(){
    std::cout << "default RPN constructor called" << std::endl;
}

RPN::RPN(const RPN &src) : pile(src.pile){

}

RPN &RPN::operator=(const RPN &other){

    if(this != &other)
        this->pile = other.pile;
    return(*this);
}

static int toInt(const std::string& s) {
	std::istringstream iss(s);
	int n;
	if (!(iss >> n)) {
		throw std::runtime_error("Erreur : token invalide");
	}
	return n;
}

void RPN::applyCalcul(const std::string &input){

    if(pile.size() < 2){
        std::cerr << "Error not enough number in the stack" << std::endl;
        return;
    }
    int a = pile.top(); pile.pop();
    int b = pile.top(); pile.pop();

    if(input == "+")
        pile.push(b + a);
    else if(input == "-")
        pile.push(b - a);
    else if(input == "*")
        pile.push(b * a);
    else if(input == "/"){
        if(b == 0){
            throw std::runtime_error( "Error cannot apply the  calcul with b equal to 0");
        }
        else
            pile.push(b / a);
    }
}

static bool isOperator(const std::string &token){
    return token == "+" || token == "-" || token == "/" || token == "*";
}

int RPN::loadstack(const std::string &expr){

    std::istringstream iss(expr);
	std::string token;

	while(iss >> token){
		if(isdigit(token[0]) || (token.size() > 1 && isdigit(token[1]))){
			try {
                pile.push(toInt(token));
        } catch (const std::invalid_argument&) {
            throw std::runtime_error("Erreur : token invalide ");
		        }
		} else if (isOperator(token)){
			applyCalcul(token);
		}else {
			throw std::runtime_error("Error\n Invalid token");
		}
	}
	if(pile.size() != 1){
		throw std::runtime_error("Error\n Invalid expression");
	}
	return pile.top();
}



RPN::~RPN(){
    std::cout << "default RPN destructor called" << std::endl;
}

