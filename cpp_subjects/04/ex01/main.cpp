#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define NUM 10

std::string Brain::ideas_pool_[14] = {
    "\"beam me up, Scotty.\"",
    "\"Hang on tight. And survive. Everybody does.\"",
    "\"Logic is the beginning of wisdom, not the end.\"",
    "\"Highly illogical.\"",
    "\"Live long, and prosper.\"",
    "\"Things are only impossible until they're not.\"",
    "\"Insufficient facts always invite danger.\"",
    "\"I cannot change the laws of physics.\"",
    "\"KHAAANNN!\"",
    "\"One man cannot summon the future.\"",
    "\"But one man can change the present!\"",
    "\"Change is the essential process of all existence.\"",
    "\"Without freedom of choice there is no creativity.\"",
    "\"To boldly go where no man has gone before.\"",
};

int main() {
    std::cout << "=========== create all ============" << std::endl;
    Animal* animal[NUM];

    for (int i = 0; i < NUM / 2; i++) {
        animal[i] = new Dog("dog");
    }

    for (int i = NUM / 2; i < NUM; i++) {
        animal[i] = new Cat("cat");
    }

    std::cout << "=========== check all ============" << std::endl;

    // 기초클래스의 포인터로 가리켜도 제대로 동작하는지 확인.
    for (int i = 0; i < NUM; i++) {
        animal[i]->makeSound();
    }

    // brain을 뽑아보기 위해 임시적으로 down casting (upcasting한 객체를 원래대로 파생 클래스의 포인터로 가리킬 때 사용)
    for (int i = 0; i < NUM / 2; i++) {
        Dog* tmp = (Dog*)animal[i];
        std::cout << "What's in your head? " << (tmp->getBrain().getIdeas())[0] << std::endl;
    }
    for (int i = NUM / 2; i < NUM; i++) {
        Cat* tmp = (Cat*)animal[i];
        std::cout << "What's in your head? " << (tmp->getBrain().getIdeas())[0] << std::endl;
    }

    std::cout << "=========== delete all ============" << std::endl;
    for (int i = 0; i < NUM; i++) {
        delete animal[i];
    }

    std::cout << "=========== leaks check ============" << std::endl;
    while (1)
        ;
}