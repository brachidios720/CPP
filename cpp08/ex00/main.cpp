#include <iostream>
#include "easyfind.hpp"


int main()
{
    std::vector<int> vec1(10);
    std::vector<int> vec2(10);
    std::list<int>  list;

    for(int i = 0; i < 10; i++){
        vec1.push_back(i);
        vec2.push_back(i);
        list.push_back(i);
    }
    try{

        std::cout << "for vec1 = " << *easyfind(vec1, 5) << std::endl;
        std::cout << "for vec2 = " << *easyfind(vec2, 9) << std::endl;
        std::cout << "for liste =" << *easyfind(list, 3) << std::endl;

        std::cout << std::endl;
        std::cout << "for vec2 = " << *easyfind(vec2, 10) << std::endl;

    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}