#pragma once 


#include <string>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <limits>


class ScalarConverter{

    public:

            static void convert(std::string const &literal);

    private:
            ScalarConverter();
            ScalarConverter(const ScalarConverter &cpy);
            ScalarConverter&operator=(const ScalarConverter &other);
            ~ScalarConverter();
};