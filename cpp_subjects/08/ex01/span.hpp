
#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <string>
#include <vector>

class Span {
   private:
    unsigned int limit_;
    std::vector<int> data_;

   public:
    Span(unsigned int N);
    Span(Span const& span);
    ~Span();

    // add
    void addNumber(int num);
    void addNumber(std::vector<int>::iterator from, std::vector<int>::iterator to);

    // calc span
    int shortestSpan(void) const;
    int longestSpan(void) const;

    // exception
    class FullStorageException : public std::exception {
       public:
        FullStorageException();
        virtual const char* what(void) const throw();
    };
    class NumbersNotEnoughException : public std::exception {
       public:
        NumbersNotEnoughException();
        virtual const char* what(void) const throw();
    };

    // operator
    Span& operator=(Span const& other);
};

#endif