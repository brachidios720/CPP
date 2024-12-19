#include <iostream>
#include <string>
#include <cctype>


int main(int ac, char **av)
{
    if(ac == 1)
        return(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
    for(std::size_t i = 1; av[i]; i++){
        std::string result = av[i];
        for(std::size_t y = 0; y < result.length(); y++){
                std::cout << static_cast<char>(std::toupper(result[y]));
        }
    }
    std::cout << std::endl;
    return(0);
}
