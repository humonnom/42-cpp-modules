#include <Array.hpp>
#include <iostream>

#define MAX_VAL 750

void f(const Array<int>& x) {
    std::cout << "=====" << std::endl;
    std::cout << x[0] << std::endl;
}

int main(int, char**) {
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++) {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
        if (i == MAX_VAL - 1)
            std::cerr << "same value checked~!(=연산자 테스트)" << std::endl;
    }
    Array<int> numbers_copied(numbers);
    for (int i = 0; i < MAX_VAL; i++) {
        if (numbers[i] != numbers_copied[i]) {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
        if (i == MAX_VAL - 1)
            std::cerr << "same value checked~!(복사생성자 비교테스트)" << std::endl;
    }
    //out of limit check
    try {
        numbers[-2] = 0;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    try {
        numbers[MAX_VAL] = 0;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand();
    }
    const Array<int> n(2);
    f(n);
    delete[] mirror;
    // while (1)
    //     ;
    return 0;
}