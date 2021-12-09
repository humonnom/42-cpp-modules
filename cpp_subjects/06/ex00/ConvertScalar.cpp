#include "ConvertScalar.hpp"

#include <math.h>
#include <stdlib.h>

#include <cctype>
#include <iostream>
#include <stdexcept>
#include <string>

ConvertScalar::ConvertScalar() : input_(""), value_(0.0) {
    std::cout << "[ConvertScalar] 생성자" << std::endl;
};

ConvertScalar::ConvertScalar(std::string const& input) : input_(verifyInput(input)), value_(0.0) {
    std::cout << "[ConvertScalar] 생성자" << std::endl;
    try {
        setValue(input);
    } catch (std::bad_alloc& e) {
        std::cout << e.what() << std::endl;
        throw;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
        throw;
    } catch (...) {
        std::cout << "other exception" << std::endl;
        throw;
    }
};

ConvertScalar::ConvertScalar(ConvertScalar const& other) : input_(other.getInput()), value_(other.getValue()) {
    std::cout << "[ConvertScalar] 복사생성자" << std::endl;
};

ConvertScalar::~ConvertScalar() {
    std::cout << "[ConvertScalar] 소멸자" << std::endl;
};

//getter
std::string const& ConvertScalar::getInput() const {
    return input_;
};
double const& ConvertScalar::getValue() const {
    return value_;
};

//setter
void ConvertScalar::setValue(std::string const& input) {
    char* end = NULL;
    double value = std::strtod(input.c_str(), &end);
    if (value == HUGE_VAL)
        throw(std::range_error("input"));
    if (value == 0.0 && isNotDigit(input[0]))
        throw(std::bad_alloc());
    if (*end && std::strcmp(end, "f"))
        throw(std::bad_alloc());
    *(const_cast<double*>(&value_)) = value;
};

bool ConvertScalar::isNotDigit(char const& c) {
    if (!std::isdigit(c) && c != '-' && c != '+')
        return true;
    return false;
};

//verify
std::string const& ConvertScalar::verifyInput(std::string const& input) const {
    return input;
};

//convert
char ConvertScalar::toChar() const {
    return (static_cast<char>(value_));
};
int ConvertScalar::toInt() const {
    return (static_cast<int>(value_));
};
float ConvertScalar::toFloat() const {
    return (static_cast<float>(value_));
};
double ConvertScalar::toDouble() const {
    return (value_);
};

//operator
ConvertScalar& ConvertScalar::operator=(ConvertScalar const& other) {
    if (this != &other) {
        *(const_cast<std::string*>(&input_)) = other.verifyInput(other.getInput());
        *(const_cast<double*>(&value_)) = other.getValue();
    }
    return *this;
};

std::ostream& operator<<(std::ostream& ostream, ConvertScalar const& target) {
    ostream << "Input: " << target.getInput() << " | "
            << "Value: " << target.getValue() << " | "
            << "Char: " << target.toChar() << " | "
            << "Int: " << target.toInt() << " | "
            << "Float: " << target.toFloat() << " | "
            << "Double: " << target.toDouble();
    return ostream;
}