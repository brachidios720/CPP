#include "Zombie.hpp"
#include <cstddef>
#include <string>

Zombie* zombieHorde( int N, std::string name )
{
    if(N <= 0)
        return(NULL);

    Zombie* arrayZombie = new Zombie[N];
    for(int i = 0 ; i < N ; i++){
        arrayZombie[i].setName(name);
    }
    return(arrayZombie);
}
