#include <iostream>
#include <string>

int main(){
	std::string greeting = std::string("HI THIS IS BRAIN");
	std::string* stringPTR = &greeting;
	std::string& stringREF = greeting;

	std::cout << "[string   ] " << greeting << std::endl;
	std::cout << "[pointer  ] " << *stringPTR << std::endl;
	std::cout << "[reference] " << stringREF << std::endl;
}