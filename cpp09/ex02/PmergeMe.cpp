#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){

}

template<typename Container>
void PmergeMe::fordJohnsonSort(Container &input){

    if(input.size() <= 1)
        return;
    
typedef typename Container::iterator Iter;
typedef std::pair<int, int> Pair;
std::vector<Pair> pairs
Container mainChain;
std::vector<int> pending;

Iter it = input.begin();
while(it != input.end()){
    int first = *it;
    it++;
    if(if != input.end()){
        int second = *it;
        it++;
        if(first > second){
            pairs.push_back(std::make_pair(second, first));
        else
            pairs.push_back(std::make_pair(first, second));
        }
    }
    else    
        pending.push_back(first);
}


}

PmergeMe::~PmergeMe(){

}