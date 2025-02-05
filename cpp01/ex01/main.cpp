#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );
int main(void){

    int N = 10;

    std::cout << "creat order of " << N << " zombie..." << std::endl;

    Zombie* horder = zombieHorde(N, "HorderZombie");

    if(horder)
    {
        for(int i = 0; i < N ; i++){
            horder[i].annouce();
        }
        delete[] horder;
    }
    else{
        std::cout << "Failes to creat Zombie horder" << std::endl;
    }
    return(0);
}