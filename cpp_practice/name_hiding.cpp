#include <iostream>

void same_function(int x) {
    std::cout << "first one-" << x << std::endl;
}
void same_function(char x) {
    std::cout << "second one-" << x << std::endl;
}

int main() {
    void same_function(int x);
    //second one이 가려짐
    same_function('c');
    int a;
    a = 2;
    {
        int a;
        a = 3;
        std::cout << a << std::endl;
    }
    same_function(1);
}
//참고: name-hiding된 변수에 대해서 에러를 띄우는 플래그 -Wshadow
// clang++ -Wall -Wextra -Werror name_hiding.cpp
// clang++ -Wall -Wextra -Werror -Wshadow name_hiding.cpp