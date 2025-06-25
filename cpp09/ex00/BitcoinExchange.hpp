#pragma once 

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <limits.h>
#include <cstdlib>
#include <cctype>



class BitcoinExchange {

    public :
                BitcoinExchange();
                BitcoinExchange(BitcoinExchange const &src);
                BitcoinExchange&operator=(const BitcoinExchange &other);
                void loadmap(const std::string &input);
                void loadData(const std::string &data);
                
                ~BitcoinExchange();

    private :
            std::map<std::string, float> map;
};