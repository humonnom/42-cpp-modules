#include "Karen.hpp"

void Karen::debug(void) {
    std::cout << "I want to climb that one. I think I should start with little yellow one, and move to another blue one over there..." << std::endl;
};

void Karen::info(void) {
    std::cout << "These blue rocks look very good, but that red one looks very slippery." << std::endl;
};

void Karen::warning(void) {
    std::cout << "'Creak' " << std::endl;
};

void Karen::error(void) {
    std::cout << "'Boom!!'" << std::endl;
};

void Karen::invalid(void) {
    std::cout << "<< invalid comment >>" << std::endl;
}

void Karen::complain(std::string level) {
    void (Karen::*func)(void);
    func = &Karen::invalid;
    (level == "DEBUG") && (func = &Karen::debug);
    (level == "INFO") && (func = &Karen::info);
    (level == "WARNING") && (func = &Karen::warning);
    (level == "ERROR") && (func = &Karen::error);
    (this->*func)();
};