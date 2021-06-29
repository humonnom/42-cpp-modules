#include <iostream>

int
	main(int argc, char const** argv)
{
	for (int i = 1; i < argc; i++)
	{
		std::string line(argv[i]);
		size_t len = line.length();
		for (size_t j = 0; j < len; j++)
			std::cout << static_cast<char>(std::toupper(line[j]));
	}
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return (0);
}