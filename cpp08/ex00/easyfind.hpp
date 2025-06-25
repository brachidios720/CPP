#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <stdexcept>
#include <vector>
#include <list>


template <typename T>

typename T::iterator easyfind( T &container, int luckynumber){
    typename T::iterator it = std::find(container.begin(), container.end(), luckynumber);
    if(it == container.end()){
        throw(std::runtime_error("luckynumber not find in this container"));
    }
    return(it);
}