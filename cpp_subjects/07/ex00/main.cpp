#include <iostream>
#include <string>

#include "whatever.hpp"

// my main
int main() {
    std::cout << "===== int =====" << std::endl;
    test(42, 0);
    std::cout << "===== float =====" << std::endl;
    test(42.0, 0.0);
    std::cout << "===== string =====" << std::endl;
    test(std::string("42"), std::string("0"));
    return 0;
}

// subject main
// int main(void) {
//     int a = 2;
//     int b = 3;
//     ::swap(a, b);
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
//     std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
//     std::string c = "chaine1";
//     std::string d = "chaine2";
//     ::swap(c, d);
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
//     std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
//     return 0;
// }