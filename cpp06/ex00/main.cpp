#include "ScalarConverter.hpp"

int main(int ac, char **av){

    if(ac == 2){
        std::string input(av[1]);
        ScalarConverter::convert(av[1]);
    }
    else
        std::cout << "bad Arguments" << std::endl;
    return(0);
}