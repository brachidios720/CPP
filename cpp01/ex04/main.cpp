#include <iostream>
#include <string>
#include <fstream>


bool    check_string(const std::string s1, const std::string s2)
{
    if(s1.empty() || s2.empty())
        return(false);
    if(s1 == s2)
        return(false);
    return(true);
}

bool    swapElements(const std::string &filname, const std::string &s1, const std::string &s2)
{
    if(!check_string(s1, s2))
        return(false);

    std::string outputFile = filname + ".replace";

    std::ifstream input(filname);
    if(!input){
        std::cerr << "Error cannot open file" << filname << std::endl;
        return(false);
    }
    std::ofstream  output(outputFile);
    if(!output){
        std::cerr << "Error cannot creat file" << outputFile << std::endl;
        return(false);
    }
    std::string line;
    std::string linetoPut;
    while(std::getline(input, line)) {
        for(size_t i = 0; i < line.length(); i++){
            if(line.substr(i, s1.length()) == s1)
            {
                linetoPut += s2;
                i += s1.length() - 1;
            }
            else
                linetoPut += line[i];
        }
        output << linetoPut << std::endl;
        linetoPut.clear();
    }
    return(true);
}


int main(int ac, char **av)
{
    if(ac != 4)
        return(std::cout << "bad arguments : <Filename>, <s1>, <s2>" << std::endl, 1);
    else
        if(!swapElements(av[1], av[2], av[3]))
            return(1);
    return(0);
}
