#pragma once 


#include <vector>
#include <deque>
#include <iostream>
#include <string>
#include <sstream>
#include <sys/time.h>
#include <algorithm>
#include <utility>
#include <iterator>


class PmergeMe {


    public:
            PmergeMe();
            PmergeMe (const PmergeMe &cpy);
            PmergeMe &operator=(const PmergeMe &cpy);

            ~PmergeMe();


    private:


                std::vector<int> vec;
                std::deque<int> deq;
                double vecTime;
                double deqTime;

                template<typename Container>
                void fordJohnsonSort(Container &input);


};