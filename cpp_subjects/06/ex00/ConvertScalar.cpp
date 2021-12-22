#include "ConvertScalar.hpp"

#include <math.h>
#include <stdlib.h>

#include <cctype>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>

ConvertScalar::ConvertScalar() : input_(""), value_(0.0){};

ConvertScalar::ConvertScalar(std::string const& input) : input_(input), value_(0.0) {
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

ConvertScalar::ConvertScalar(ConvertScalar const& other) : input_(other.getInput()), value_(other.getValue()){};

ConvertScalar::~ConvertScalar(){};

//getter
std::string const& ConvertScalar::getInput() const {
    return input_;
};
double const& ConvertScalar::getValue() const {
    return value_;
};

//setter
void ConvertScalar::setValue(std::string const& input) {
    double value;
    if (input.length() == 1 && !std::isdigit(input[0])) {
        value = input[0];
    } else {
        char* end = NULL;
        value = std::strtod(input.c_str(), &end);
        if (value == 0.0 && isNotDigit(input[0]))  // strtod failed(return: 0.0)
            throw(std::bad_alloc());
        if (*end && std::strcmp(end, "f"))  // contain non-digit character && it's not float
            throw(std::bad_alloc());
    }
    *(const_cast<double*>(&value_)) = value;
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

void ConvertScalar::printAsChar(std::ostream& ostream) const {
    ostream << "char: ";
    char converted = toChar();
    if (isnan(value_))
        ostream << "impossible" << std::endl;
    else if (!std::isprint(converted))
        ostream << "Non displayable" << std::endl;
    else
        ostream << "'" << converted << "'" << std::endl;
};
void ConvertScalar::printAsInt(std::ostream& ostream) const {
    ostream << "int: ";
    int converted = toInt();
    if (isnan(value_) || isinf(value_))
        ostream << "impossible" << std::endl;
    else
        ostream << converted << std::endl;
};
void ConvertScalar::printAsFloat(std::ostream& ostream) const {
    ostream << "float: ";
    float converted = toFloat();
    if (isnan(value_) || isinf(value_))
        ostream << std::showpos << converted << "f" << std::endl;
    else if (converted != static_cast<long long>(converted))
        ostream << std::setprecision(std::numeric_limits<float>::digits10) << converted << "f" << std::endl;
    else
        ostream << converted << ".0f" << std::endl;
};
void ConvertScalar::printAsDouble(std::ostream& ostream) const {
    ostream << "double: ";
    double converted = toDouble();
    if (isnan(value_) || isinf(value_))
        ostream << std::showpos << converted << std::endl;
    else if (converted != static_cast<long long>(converted))
        ostream << std::setprecision(std::numeric_limits<double>::digits10) << converted << std::endl;
    else
        ostream << converted << ".0" << std::endl;
};

//operator
ConvertScalar& ConvertScalar::operator=(ConvertScalar const& other) {
    if (this != &other) {
        *(const_cast<std::string*>(&input_)) = other.getInput();
        *(const_cast<double*>(&value_)) = other.getValue();
    }
    return *this;
};

std::ostream& operator<<(std::ostream& ostream, ConvertScalar const& target) {
    target.printAsChar(ostream);
    target.printAsInt(ostream);
    target.printAsFloat(ostream);
    target.printAsDouble(ostream);
    return ostream;
}

//static
static bool isNotDigit(char const& c) {
    if (!std::isdigit(c) && c != '-' && c != '+')
        return true;
    return false;
};