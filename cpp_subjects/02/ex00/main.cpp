#include "Fixed.hpp"

int main() {
    std::cout << "[a생성]" << std::endl;
    Fixed a;
    std::cout << "[b생성]" << std::endl;
    Fixed b(a);
    std::cout << "[c생성]" << std::endl;
    Fixed c;
    std::cout << "[대입]" << std::endl;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
}