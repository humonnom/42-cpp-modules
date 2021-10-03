#include <iostream>
#include <string>
#include "Sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "error: Invalid number of arguments.\n[ Correct format -> {filename} {search} {replace} ]" << std::endl;
		return (1);
	}
	try
	{
		Sed::replace(argv[1], argv[2], argv[3]);
	}
	catch (char const *err)
	{
		std::cerr << err << std::endl;
		return (1);
	}
	return (0);
}