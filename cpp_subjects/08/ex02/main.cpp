#include <iostream>
#include <list>

#include "mutantstack.hpp"

int main() {
    std::list<int> l;
    l.push_front(5);
    l.push_front(17);
    std::cout << "top: " << l.front() << std::endl;
    l.pop_front();
    std::cout << "size: " << l.size() << std::endl;
    l.push_back(3);
    l.push_back(5);
    l.push_back(737);
    l.push_back(0);
    std::list<int>::iterator l_it = l.begin();
    std::list<int>::iterator l_ite = l.end();
    ++l_it;
    --l_it;
    while (l_it != l_ite) {
        std::cout << *l_it << std::endl;
        ++l_it;
    }
    std::list<int> l_copy(l);

    std::cout << "===========================" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}