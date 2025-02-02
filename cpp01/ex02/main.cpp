#include <iostream>
#include <string>

# define MEMORY_ADRESS  "The memory address of "
# define STR            "Str :"
# define VALUE          "The value of "
# define STRP           "StrPointeur :"
# define STRR           "StrRef :"



int main(void)
{
    std::string      str = "HI THIS IS BRAIN";
    std::string&     strr = str; 
    std::string*     strp = &str;

    std::cout << "---------------------------------------------------" << std::endl;
	std::cout << MEMORY_ADRESS << STR << &str << std::endl;
	std::cout << MEMORY_ADRESS << STRP << strp << std::endl;
	std::cout << MEMORY_ADRESS << STRR << &strr << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << VALUE << STR << str << std::endl;
	std::cout << VALUE << STRP << *strp << std::endl;
	std::cout << VALUE << STRR << strr<< std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	return (0);
}