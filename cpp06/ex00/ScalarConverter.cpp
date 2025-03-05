#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    std::cout << "default ScalarConverter constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter  &cpy){
    (void) cpy;
    std::cout << "default ScalarConverter cpy called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other){
    (void)other;
    return(*this);
}

void ScalarConverter::convert(std::string const &literal){
    
    char *end;
    double d = std::strtod(literal.c_str(), &end);
    int i = static_cast<int>(d);
    char c = static_cast<char>(i);
    float f = static_cast<float>(d);

    if(literal == end){
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return;
    }
    if(std::isnan(d) || d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
        std::cout << "char: impossible" << std::endl;
    else if(!std::isprint(c)){
        std::cout << "char: non displayable" << std::endl;
    }
    else
        std::cout << "char: " << "'" << c << "'" << std::endl;

    if(std::isnan(d) || d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
        
    std::cout << "float: " << f << (f == i ? ".0" : "") << "f" << std::endl;
    std::cout << "double: " << d << (d == i ? ".0" : "")  << std::endl;

    
}
ScalarConverter::~ScalarConverter(){
    std::cout << "default ScalarConverter destructor called" << std::endl;
}