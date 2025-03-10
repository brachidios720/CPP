#include "iter.hpp"

int main(){

    int array[] = {1, 2, 3, 4};
    iter(array, 4, printint);

    std::cout << std::endl;

    std::string const arraychar[] = {"bonjour", "je suis", "ici"};
    iter(arraychar, 3, printchar);
}