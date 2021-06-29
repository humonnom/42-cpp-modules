#include "mypb.hpp"

int Program::programLoop(void){
	while (_buffer != "EXIT"){
		printAllCommand();
		std::cout << "-> ";
		std::getline(std::cin, _buffer);
		if (_buffer == "ADD")
			_pb.add();
		else if (_buffer == "SEARCH")
			_pb.search();
		else if (_buffer != "EXIT")
			std::cout << "`command not found`" << std::endl;
	}
	return (0);
};

void Program::printAllCommand(void){
	std::cout << "command list: [ ADD, SEARCH, EXIT ]" << std::endl;
};

int
	main(void)
{
	Program program;
	return (program.programLoop());
}