#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
class Brain{

        public:
                Brain();
                Brain(const Brain &copy);
                Brain&operator=(const Brain &copy);
                ~Brain();

        private:
                std::string     matrice[100];
};

#endif 