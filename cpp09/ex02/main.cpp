#include "PmergeMe.hpp"
#include <iostream>


bool isAnInteger(const std::string &str){

        if(str.empty())
            return false;

        for (size_t i = 0; i < str.length(); i++){
            if(!isdigit(str[i]))
                return false;
        }

        return true;
}


int main(int ac, char **av)
{

        if(ac < 2 )
        {
            std::cerr << "Error: numbers of arguments no valid." << std::endl;
            return 1;
        }

        
        for(int i = 1; i < ac; i++){
            std::string arg = av[i];

            if(!isAnInteger(arg)){
                std::cerr << "Error: Invalid Arguments" << std::endl;
                return 1;
            }
        }
}