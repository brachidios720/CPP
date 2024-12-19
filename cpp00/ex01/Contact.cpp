#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact()
{
}

void    Contact::setContact(const std::string Firstname, const std::string Lastname, const std::string Nickname, const std::string Phonenumber, const std::string Darkestsecret)
{
    this->firstname = Firstname;
    this->lastname = Lastname;
    this->nickname = Nickname;
    this->phone_number = Phonenumber;
    this->darkest_scret = Darkestsecret;
}

void    Contact::displayContact(void)
{
    std::cout << "first name : " << this->firstname << std::endl;
    std::cout << "last name : " << this->lastname << std::endl;
    std::cout << "nickname : " << this->nickname << std::endl;
    std::cout << "phone number : " << this->phone_number << std::endl;
    std::cout << "darkest secret : " << this->darkest_scret << std::endl;
}

std::string    Contact::Format_colon(std::string &str)
{
    if(str.length() > 10)
        return(str.substr(0, 9) + ".");
    else
        return(std::string(10 - str.length(), ' ') + str);
}

void    Contact::displayheader(int index)
{
    std::cout   << "|" << std::setw(9) << index
                << "|" << Contact::Format_colon(this->firstname)
                << "|" << Contact::Format_colon(this->lastname)
                << "|" << Contact::Format_colon(this->nickname)
                << std::endl;
}

Contact::~Contact()
{
}
