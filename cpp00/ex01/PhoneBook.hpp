#pragma once 
#include "Contact.hpp"
#include <string>
#include <iostream>

#define RESET       "\033[0m"       // Réinitialiser les couleurs
#define RED         "\033[31m"      // Rouge
#define GREEN       "\033[32m"      // Vert
#define YELLOW      "\033[33m"      // Jaune
#define BLUE        "\033[34m"      // Bleu
#define MAGENTA     "\033[35m"      // Magenta
#define CYAN        "\033[36m"      // Cyan
#define WHITE       "\033[37m"      // Blanc
#define BLACK       "\033[30m"      // Noir

// Couleurs de fond
#define BG_RED      "\033[41m"      // Fond Rouge
#define BG_GREEN    "\033[42m"      // Fond Vert
#define BG_YELLOW   "\033[43m"      // Fond Jaune
#define BG_BLUE     "\033[44m"      // Fond Bleu
#define BG_MAGENTA  "\033[45m"      // Fond Magenta
#define BG_CYAN     "\033[46m"      // Fond Cyan
#define BG_WHITE    "\033[47m"      // Fond Blanc
#define BG_BLACK    "\033[40m"      // Fond Noir

// Styles de texte
#define BOLD        "\033[1m"       // Gras
#define UNDERLINE   "\033[4m"       // Souligné
#define BLINK       "\033[5m"       // Clignotant (fonctionne rarement)
#define REVERSED    "\033[7m"       // Inverser les couleurs (texte/fond)

class Phonebook{

    public:
            Phonebook();
            void    addcontact(const Contact &newContact);
            bool    Inbase();
            ~Phonebook();
    private:
            Contact     Contactlist[8];
            bool        CheckIndex(int index) const;
            bool        GetUserInput(std::string &str, int &index);
            int         IndexContact;
            int         TotalContact;
};