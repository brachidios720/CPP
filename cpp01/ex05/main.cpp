
#include "Harl.hpp"
#include "iostream"

int main(void)
{
        Harl harl;

        std::cout << "testing with debug Level" << std::endl;
        harl.complain("DEBUG");

        std::cout << "testing with info Level" << std::endl;
        harl.complain("INFO");

        std::cout << "testing with debug Level" << std::endl;
        harl.complain("WARNING");

        std::cout << "testing with debug Level" << std::endl;
        harl.complain("ERROR");

        std::cout << "testing with an invalide Level" << std::endl;
        harl.complain("INVALID");

    return(0);
}