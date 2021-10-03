#include <iostream>
#include <string>

int main()
{
	std::string greeting = std::string("HI THIS IS BRAIN");
	std::string *stringPTR = &greeting;
	std::string &stringREF = greeting;

	std::cout << "<<<<<< PRINT ADDRESS >>>>>>" << std::endl;
	std::cout << "[string   ] " << &greeting << "-> display the address in memory of the string" << std::endl;
	std::cout << "[pointer  ] " << stringPTR << "-> display the address in memory of the string by using stringPTR" << std::endl;
	std::cout << "[reference] " << &stringREF << "-> display the address in memory of the string by using stringREF" << std::endl;

	std::cout << std::endl;

	std::cout << "<<<<<< PRINT STRING >>>>>>" << std::endl;
	std::cout << "[string   ] " << greeting << "display the string" << std::endl;
	std::cout << "[pointer  ] " << *stringPTR << "-> display the string using the pointer" << std::endl;
	std::cout << "[reference] " << stringREF << "-> display the string using the reference" << std::endl;
}