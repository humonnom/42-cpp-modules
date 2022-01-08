#include <iostream>
#include <vector>

#include "span.hpp"

int main() {
    try {
        std::cout << "<< basic >>" << std::endl;
        {
            Span sp = Span(5);
            sp.addNumber(5);
            // std::cout << sp.shortestSpan()
            //           << std::endl; // numbers not enough exception
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            // sp.addNumber(15);  // out of limits => Full storage exception
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        std::cout << "<< 10000 >>" << std::endl;
        {
            Span sp = Span(10000);
            for (int i = 0; i < 10000; i++) {
                sp.addNumber(i);
            }
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        std::cout << "<< range >>" << std::endl;
        {
            std::vector<int> v;
            v.push_back(4);
            v.push_back(2);
            v.push_back(42);
            v.push_back(420);
            v.push_back(2022);
            Span sp(v.size());

            sp.addNumber(std::begin(v), std::end(v));
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;

    } catch (...) {
        std::cout << "예상치 못한 에러로 프로그램 강제종료" << std::endl;
    }
}