#include "iter.hpp"

int main(){

    int array[] = {1, 2, 3, 4};
    iter(array, 4, printint);

    std::cout << std::endl;

    const std::string  arraychar[] = {"bonjour", "je suis", "ici", "j ai faim"};
    iter(arraychar, 4, printchar);
}