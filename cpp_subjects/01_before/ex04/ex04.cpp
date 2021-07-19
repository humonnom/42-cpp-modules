#include <iostream>
#include <string>

int main(){
	std::string greeting = std::string("HI THIS IS BRAIN");
	std::string* ptr = &greeting;
	std::string& ref = greeting;

	std::cout << "[string   ] " << greeting << std::endl;
	std::cout << "[pointer  ] " << *ptr << std::endl;
	std::cout << "[reference] " << ref << std::endl;
}