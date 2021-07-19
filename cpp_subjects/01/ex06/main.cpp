#include "Karen.hpp"

int main(int argc, char** argv)
{
	Karen karen;
	int complain_num;

	if (argc != 2)
	{
		std::cout << "[ invalid argument number ]" << std::endl;
		return (1);
	}
	std::string level = argv[1];
	complain_num = 4;
	(level.compare("DEBUG") == 0) && (complain_num = 0);
	(level.compare("INFO") == 0) && (complain_num = 1);
	(level.compare("WARNING") == 0) && (complain_num = 2);
	(level.compare("ERROR") == 0) && (complain_num = 3);

	switch (complain_num)
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		karen.complain("DEBUG");
		std::cout << std::endl;
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		karen.complain("INFO");
		std::cout << std::endl;
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		karen.complain("WARNING");
		std::cout << std::endl;
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		karen.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}