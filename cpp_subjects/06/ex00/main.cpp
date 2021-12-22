#include "ConvertScalar.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "./convert {input}" << std::endl;
        return 0;
    }
    try {
        std::cout << ConvertScalar(argv[1]) << std::endl;
    } catch (...) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
};