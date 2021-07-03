#include <iostream>
#include "Human.hpp"

int main(){

	std::cout << "+-----Juepark's identify()-----+" << std::endl;
	Human juepark;
	std::cout << juepark.identify() << std::endl;
	std::cout << juepark.getBrain().identify() << std::endl;

	std::cout << "+-----Data's identify()-----+" << std::endl;
	Human data;
	
	std::cout << data.identify() << std::endl;
	std::cout << data.getBrain().identify() << std::endl;
	
	const Brain& datas_brain = data.getBrain();
	std::cout << datas_brain.identify() << std::endl;

	std::cout << "+-----Jean Luc's identify()-----+" << std::endl;
	Human jean_luc;
	
	std::cout << jean_luc.identify() << std::endl;
	std::cout << jean_luc.getBrain().identify() << std::endl;
	
	const Brain& jean_lucs_brain = jean_luc.getBrain();
	std::cout << jean_lucs_brain.identify() << std::endl;
}