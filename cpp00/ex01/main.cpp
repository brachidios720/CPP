#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>


int main (void)
{
    Phonebook phonebook;
    std::string command;
    std::cout << "Welcome to your personal repertory !" << std::endl;
    std::cout << "Use the following command : ADD, SEARCH, EXIT" << std::endl;

    while(1)
    {
        std::cout << "enter which command you want to exec : ";
        std::getline(std::cin, command);

        if(std::cin.eof())
            return(std::cin.clear(), 0);
        if(command == "ADD")
        {
            std::string FirstName, LastName, Nickname, PhoneNumber, DarkestSecret;

            std::cout << "First name : ";
            std::getline(std::cin, FirstName) ;
            std::cout << "Last name : ";
            std::getline(std::cin, LastName);
            std::cout << "Nickname : ";
            std::getline(std::cin, Nickname);
            std::cout << "Phone number : ";
            std::getline(std::cin, PhoneNumber);
            std::cout << "Darkest secret : ";
            std::getline(std::cin, DarkestSecret);

            Contact newcontact;
            
            newcontact.setContact(FirstName, LastName, Nickname, PhoneNumber, DarkestSecret);
            phonebook.addcontact(newcontact);
        }
        else if(command == "SEARCH")
        {
            if(!phonebook.Inbase())
                std::cout  << "input error !" << std::endl;
        }
        else if(command == "EXIT")
            return(std::cout << "Good Bye !" << std::endl, 0);
        std::cout << "Use the following command : ADD, SEARCH, EXIT" << std::endl;
        command.clear();
        std::cin.clear();
    }
    return(0);
}
