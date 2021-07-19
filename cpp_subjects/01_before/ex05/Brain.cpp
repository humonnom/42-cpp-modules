#include "Brain.hpp"

std::string Brain::identify() const {
	std::stringstream buffer;

	const long address = (long)this;
	buffer << "0x" << std::uppercase << std::hex << address;
	return (buffer.str());
}