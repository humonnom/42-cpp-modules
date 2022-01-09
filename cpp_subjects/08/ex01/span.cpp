
#include "span.hpp"

#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>

Span::Span(unsigned int N) : limit_(N) {}

Span::Span(Span const& other) {
    *this = other;
}

Span::~Span() {}

void Span::addNumber(int num) {
    if (data_.size() == limit_)
        throw(FullStorageException());
    data_.push_back(num);
    std::sort(data_.begin(), data_.end());
}

void Span::addNumber(std::vector<int>::iterator from, std::vector<int>::iterator to) {
    if (data_.size() + std::distance(from, to) > limit_)
        throw(FullStorageException());

    data_.insert(data_.end(), from, to);
    std::sort(data_.begin(), data_.end());
}

int Span::shortestSpan() const {
    if (data_.size() < 2)
        throw(NumbersNotEnoughException());
    unsigned int shortest_span = INT_MAX;
    for (unsigned int i = 1; i < data_.size(); i++) {
        unsigned int span = data_[i] - data_[i - 1];
        if (span < shortest_span)
            shortest_span = span;
    }
    return shortest_span;
}

int Span::longestSpan() const {
    if (data_.size() < 2)
        throw(NumbersNotEnoughException());
    int last = data_[data_.size() - 1];
    int first = data_[0];
    return (last - first);
}

// exception
Span::FullStorageException::FullStorageException() : exception(){};
char const* Span::FullStorageException::what() const throw() {
    return ("Full Storage");
}
Span::NumbersNotEnoughException::NumbersNotEnoughException() : exception(){};
char const* Span::NumbersNotEnoughException::what() const throw() {
    return ("Not Enough Numbers To Calc Span");
}

// operator
Span& Span::operator=(Span const& other) {
    if (this != &other) {
        this->limit_ = other.limit_;
        this->data_ = other.data_;
    }
    return (*this);
}