#include <algorithm>
#include <stack>
#include <vector>
#include <deque>
#include <iostream>
#include <string>


template <class T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>{

    public:
            typedef typename Container::iterator iterator;

            iterator begin();
            iterator end();
};

template <class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin(){
    return(this->c.begin());
}

template <class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end(){
    return(this->c.end());
}