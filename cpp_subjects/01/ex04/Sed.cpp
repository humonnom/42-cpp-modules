#include "Sed.hpp"

Sed::Sed(){};

std::string Sed::edit_line(std::string const &line, std::string const &s1, std::string const &s2)
{
	std::stringstream buffer;
	std::string edited = line;
	size_t start_index;
	while (s1.compare(s2) && (start_index = edited.find(s1)) != std::string::npos)
	{
		edited.erase(start_index, s1.length());
		edited.insert(start_index, s2);
	}
	buffer << edited;
	return (buffer.str());
};

void Sed::replace(std::string const &filename, std::string const &s1, std::string const &s2)
{
	if (filename.empty() || s1.empty() || s2.empty())
		throw("error: There is empty argument. Filename, search, replace should be all filled.");

	// if (s1.compare(s2) == 0)
	std::ifstream input;
	std::ofstream output;
	std::string line;

	input.open(filename);
	if (!input.is_open())
		throw("error: Input file open failed.");

	output.open(filename + ".replace", std::ios::trunc);
	if (!output.is_open())
		throw("error: Output file open failed.");

	while (std::getline(input, line))
	{
		output << Sed::edit_line(line, s1, s2);
		if (!input.eof())
			output << '\n';
	}
	input.close();
	output.close();
};
