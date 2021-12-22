#ifndef CONVERT_SCALAR_HPP
#define CONVERT_SCALAR_HPP

#include <iostream>
#include <stdexcept>
#include <string>

class ConvertScalar {
    std::string const input_;
    double const value_;
    //setter
    void setValue(std::string const& input);
    bool isNotDigit(char const& c);

   public:
    ConvertScalar();
    ConvertScalar(std::string const& input);
    ConvertScalar(ConvertScalar const& other);
    ~ConvertScalar();

    //getter
    std::string const& getInput() const;
    double const& getValue() const;

    //convert
    char toChar() const;
    int toInt() const;
    float toFloat() const;
    double toDouble() const;

    //print
    void printAsChar(std::ostream& ostream) const;
    void printAsInt(std::ostream& ostream) const;
    void printAsFloat(std::ostream& ostream) const;
    void printAsDouble(std::ostream& ostream) const;

    //operator
    ConvertScalar& operator=(ConvertScalar const& other);
};
std::ostream& operator<<(std::ostream& ostream, ConvertScalar const& target);

#endif