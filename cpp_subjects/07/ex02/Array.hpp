#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>
#include <string>

template <typename T>
class Array {
    unsigned int limit_;
    T* data_;

   public:
    Array() : limit_(0), data_(NULL){};
    Array(unsigned int n) : limit_(n), data_(NULL) {
        if (limit_)
            data_ = new T[limit_];
    };
    Array(Array const& other) : limit_(other.size()), data_(NULL) {
        if (limit_)
            data_ = new T[limit_];
        for (unsigned int i = 0; i < limit_; i++)
            data_[i] = other.data_[i];
    };
    ~Array() {
        if (limit_)
            delete[] data_;
    };

    //getter
    unsigned int size() const {
        return limit_;
    };

    // verifier
    class OutOfLimitException : public std::exception {
       public:
        const char* what(void) const throw() {
            return ("Out of limit");
        }
    };

    // operator
    Array& operator=(Array const& other) {
        if (this != &other) {
            limit_ = other.size();
            delete[] data_;
            data_ = new T[limit_];
            for (unsigned int i = 0; i < limit_; i++)
                data_[i] = other.data_[i];
        }
    };

    T operator[](unsigned int i) const {
        std::cout << "const" << std::endl;
        if (i >= limit_)
            throw OutOfLimitException();
        return (data_[i]);
    };

    T& operator[](unsigned int i) {
        std::cout << "not const" << std::endl;
        if (i >= limit_)
            throw OutOfLimitException();
        return (data_[i]);
    };
};

#endif