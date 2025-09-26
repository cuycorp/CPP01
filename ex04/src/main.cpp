#include "main.hpp"
#include <fstream>
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	std::string line;
	std::string processedline;
	std::ifstream inFile;
	std::string nameOutfile;

	if (ac != 4)
		return (std::cout << "Bad arguments" << std::endl, 1);
	inFile.open(av[1]);
	if (!inFile.is_open())
		return (std::cout << "Could not open input file" << std::endl, 1);
	nameOutfile = std::string(av[1]) + ".replace";
	std::ofstream outFile(nameOutfile.c_str());
	while (getline(inFile, line))
	{
		processedline = processLine(line, av[2], av[3]);
		if (outFile.is_open())
			outFile << processedline << std::endl;
		else
			return (std::cout << "Could not open output file" << std::endl, 1);
	}
}

/*

	INPUT: ./ input is cat

	//A. error handling
		1. wrong No arguments
		2. infile does not exist or cant be opened
		3. s1="" and/ s2=""
		* case for empty file

	if (ac != 4)
		return (std::cout << "Bad arguments" << std::endl, 1);

	//B. Open file input and set output
	inFile.open(av[1]);
	if (!inFile.is_open())
		return (std::cout << "Could not open input file" << std::endl, 1);
	nameOutfile = std::string(av[1]) + ".replace";
	std::ofstream outFile(nameOutfile.c_str());
	if (!outFile.is_open())
		return (std::cout << "Could not open output file" << std::endl, 1);
	//LOOP
	//C. Read line

	//D. Replace words in line
	//E. Put final line in file
*/