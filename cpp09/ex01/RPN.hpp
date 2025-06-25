#pragma once 


#include <stack>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>



class RPN {

    public :
            RPN();
            RPN(const RPN &src);
            RPN&operator=(const RPN &other);
            ~RPN();
            int loadstack(const std::string &input);
            
            private :
            
            std::stack<float> pile;
            void applyCalcul(const std::string &input);

};