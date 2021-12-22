#include <cstdint>
#include <iostream>

#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data*>(raw));
}

int main(void) {
    //1. 유효한 데이터 구조체를 만들기
    Data coffee;
    coffee.name = "vanila latte";
    coffee.price = 4500;

    //2. serialize를 이용하여 데이터 주소를 얻기
    uintptr_t address = serialize(&coffee);

    //3. serialize의 리턴값을 deserialize로 보내기
    Data* result = deserialize(address);

    //4. deserialize의 리턴 결과가 첫번째 포인터와 같은 지 확인
    std::cout << "[내용 비교]\n"
              << result->name << "\n"
              << result->price << std::endl;

    std::cout << "[주소 비교]\n"
              << "data1의 주소" << &coffee << "\n"
              << "data2의 주소" << result << "\n"
              << std::endl;
    return 0;
}