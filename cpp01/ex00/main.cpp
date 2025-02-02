#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump( std::string name );

int main(void){

    std::cout << "creating Zombie on the heap..." << std::endl;
    Zombie* Heapzombie = newZombie("ZombieHeap");
    Heapzombie->annouce();

    std::cout << "creating Zombie on the stack..." << std::endl;
    randomChump("StackZombie");

    std::cout << "Deleting the heap Zombie..." << std::endl;
    delete Heapzombie;

    return(0);
}