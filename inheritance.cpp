#include <string>
#include <iostream>

class Coffee {
    int _price;
    std::string _guest;

    public:
    Coffee(int price) : _price(price), _guest("coffee"){
        std::cout << "coffee class 생성" << std::endl;
    };
    void makeCoffee(){
        std::cout << "make " << _guest << std::endl; 
    }
};

class Latte : public Coffee {
    std::string _guest;

    public:
    Latte(int price) : Coffee(price), _guest("latte") {
        std::cout << "latte class 생성" << std::endl;
    } 
};


int main()
{
    Coffee  coffee(5000);
    Latte   latte(5500);

    coffee.makeCoffee();
    latte.makeCoffee();

}