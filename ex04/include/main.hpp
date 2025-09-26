#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include "FileReader.hpp"
//template<typename T>
//
//void print_with_nl(std::string description, T value);

std::string processLine(std::string line, std::string search,
	std::string replace);

#endif