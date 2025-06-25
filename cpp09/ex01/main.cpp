#include "RPN.hpp"

int main(int ac, char **av)
{
    if(ac != 2){
        std::cerr << "Error: wring number of arguments" << std::endl;
        return(1);
    }
    try{
        RPN calculator;

        int result = calculator.loadstack(av[1]);
        std::cout << result << std::endl;
        
    }catch(std::exception &e){
        std::cerr << e.what() << std::endl;
        return(1);
    }
    return(0);
}