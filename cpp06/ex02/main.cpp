#include "Base.hpp"


int main (){


    srand(time(0));

    Base *a(generate());
    Base *b(generate());
    Base *c(generate());

    identify(a);
    identify(b);
    identify(c);

    std::cout << std::endl;

    identify(*a);
    identify(*b);
    identify(*c);

    return(0);
}