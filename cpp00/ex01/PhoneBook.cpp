#include "PhoneBook.hpp"
#include <cctype>

Phonebook::Phonebook() : IndexContact(0), TotalContact(0)
{
}

void    Phonebook::addcontact(const Contact &newcontact)
{
    Contactlist[IndexContact] = newcontact;
    IndexContact++;
    if(IndexContact > 7)
        IndexContact = 0;
    if(TotalContact < 8)
        TotalContact++;
}

bool    Phonebook::GetUserInput(std::string &str, int &index)
{
    std::cout << "enter your index choise : ";
    std::getline(std::cin, str);
    if(str.empty())
        return(std::cin.clear(), false);
    for(std::size_t i = 0; i < str.length(); i++){
        if(!std::isdigit(str[i]))
            return(false);
    }
    index = atoi(str.c_str());
    return(true);
}

bool    Phonebook::CheckIndex(int index) const
{
    if(index < 1 || index > TotalContact)
        return(false);
    return(true);
}

bool    Phonebook::Inbase()
{
    std::string yes;
    int index;

    std::cout << BOLD << GREEN << "Contact List :" << RESET << std::endl;
    std::cout << BOLD << GREEN << "|    index|first name| last name|  nickname" << RESET << std::endl;
    for(int i = 0; i < TotalContact; i++){
        Contactlist[i].displayheader(i + 1);
    }
    if(!GetUserInput(yes, index))
        return(false);
    if(!CheckIndex(index))
        return(false);
    Contactlist[index - 1].displayContact();
    return(true);
}

Phonebook::~Phonebook()
{
}