
#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <vector>

class Span {
   private:
    unsigned int limit_;
    std::vector<int> data_;
    std::vector<int> sorted_data_;

    Span(void);

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
        const char* what(void) const throw();
    };
    class NumbersNotEnoughException : public std::exception {
       public:
        const char* what(void) const throw();
    };

    // operator
    Span& operator=(Span const& other);
};

#endif