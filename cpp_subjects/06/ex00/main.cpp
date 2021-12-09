#include "ConvertScalar.hpp"

int main() {
    try {
        std::cout << "--------- create ---------" << std::endl;
        //char
        ConvertScalar char_c("c");
        //int
        ConvertScalar int_c("0");
        //float
        ConvertScalar float_c("0.0f");
        //double
        ConvertScalar double_c("0.0");
        std::cout << "--------- play ---------" << std::endl;
        std::cout << char_c << std::endl;
        std::cout << int_c << std::endl;
        std::cout << float_c << std::endl;
        std::cout << double_c << std::endl;
        std::cout << "--------- delete ---------" << std::endl;
    } catch (...) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
};

//TODO: 입력받도록 바꾸기
//