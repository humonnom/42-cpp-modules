#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
  int a;
  std::string *name;

 public:
  Fixed();
  Fixed(Fixed const &fiexd);
  ~Fixed();
  void set();
  void print();
  // Fixed& operator=(Fixed const& fixed);
};

#endif