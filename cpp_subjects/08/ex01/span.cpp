
#include "span.hpp"

#include <algorithm>

Span::Span() : limit_(0) {}

Span::Span(unsigned int N) : limit_(N) {}

Span::Span(Span const& other) {
    *this = other;
}

Span::~Span() {}

void Span::addNumber(int num) {
    if (data_.size() == limit_)
        throw(FullStorageException());

    data_.push_back(num);
    sorted_data_.push_back(num);
    std::sort(sorted_data_.begin(), sorted_data_.end());
}

void Span::addNumber(std::vector<int>::iterator from, std::vector<int>::iterator to) {
    if (data_.size() + std::distance(from, to) > limit_)
        throw(FullStorageException());

    data_.insert(data_.end(), from, to);
    sorted_data_.insert(sorted_data_.end(), from, to);
    std::sort(sorted_data_.begin(), sorted_data_.end());
}

int Span::shortestSpan() const {
    if (data_.size() < 2)
        throw(NumbersNotEnoughException());
    int span = INT_MAX;
    for (unsigned int i = 1; i < sorted_data_.size(); i++) {
        int tmp = sorted_data_[i] - sorted_data_[i - 1];
        if (tmp < span)
            span = tmp;
    }
    return span;
}

int Span::longestSpan() const {
    if (data_.size() < 2)
        throw(NumbersNotEnoughException());
    return (sorted_data_[sorted_data_.size() - 1] - sorted_data_[0]);
}

// exception
char const* Span::FullStorageException::what() const throw() {
    return ("Full Storage");
}

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