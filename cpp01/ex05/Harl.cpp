#include "Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl(){

}
void Harl::complain(std::string level){
    std::string matrice[4] = {"DEBUG","INFO", "WARNING", "ERROR"};
    void (Harl::*pointeur[]) () = {&Harl::debug, &Harl::info , &Harl::warning, &Harl::error};
    for(size_t i = 0; i < 4 ; i++){
        if(level == matrice[i]){
            return((this->*pointeur[i])());
        }
    }
}

void Harl::debug(void){
    std::cout << "[ DEBUG ] " << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
    std::cout << "[ INFO ] " << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
    std::cout << "[ WARNING ] " << std::endl;
    std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
    std::cout << "[ ERROR ] " << std::endl;    
    std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::~Harl(){

}


