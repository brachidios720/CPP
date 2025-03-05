#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base(){

}

Base* generate(void){

    int nb;

    nb = rand() % 3;

    if(nb == 0)
        return(new A());
    else if(nb == 1)
        return(new B());
    else
        return(new C());
}

void identify(Base* p){

    if(dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "not identify" << std::endl; 
}
void identify(Base& p){

    try{
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(std::exception &e){

        try{
            (void)dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch(std::exception &e){
            try{
                (void)dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            }
            catch(std::exception &e){
                std::cout << "not A, B or C" << std::endl;
            }
        }
    }
}