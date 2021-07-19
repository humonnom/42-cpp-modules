#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class Sed{
	private:
	static std::string edit_line(std::string const& line, std::string const& s1, std::string const& s2);

	public:
	Sed();
	static void replace(std::string const& filename, std::string const& s1, std::string const& s2);
};

#endif