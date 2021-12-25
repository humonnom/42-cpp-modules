#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename ANY>
void swap(ANY &a, ANY &b) {
    ANY tmp;
    tmp = a;
    a = b;
    b = tmp;
}
template <typename ANY>
ANY const& min(ANY &a, ANY &b) {
    return (a < b? a : b);
}

template <typename ANY>
ANY const& max(ANY &a, ANY &b) {
    return (a > b? a : b);
}

template <typename ANY>
void test(ANY x, ANY y) {
        std::cout << "  x:" << x << std::endl;
        std::cout << "  y:" << y << std::endl;
        swap(x, y);
        std::cout << "  -- swap --" << std::endl;
        std::cout << "  x:" << x << std::endl;
        std::cout << "  y:" << y << std::endl;

        std::cout << "  -- min --" << std::endl;
        std::cout << "  " << min(x, y) << std::endl;
        std::cout << "  -- max --" << std::endl;
        std::cout << "  " << max(x, y) << std::endl;
}

#endif