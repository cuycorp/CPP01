#include <fstream>
#include <iostream>
#include <string>
#include "main.hpp"

std::string processLine(std::string line, std::string search,
	std::string replace)
{
	int	index;
	std::string newLine;
	std::string::size_type occurrence;
	std::string subString;

	occurrence = 0;
	index = 0;
	newLine = "";
	while (1)
	{
		occurrence = line.find(search, index);
		if (occurrence != std::string::npos)
		{
            subString = line.substr(index, occurrence - index);
			newLine += subString;
			newLine += replace;
			index = index + subString.length() + search.length();
		}
		else
		{
			newLine += line.substr(index, line.length() - 1);
			return (newLine);
		}
	}
	return (newLine);
}

int	main(int ac, char **av)
{
	std::string line;
	std::string processedline;
	std::ifstream inFile;
	std::string nameOutfile;
	// A. error handling
	/*
	1. wrong No arguments
	2. infile does not exist or cant be opened
	3. s1="" and/ s2=""
	* case for empty file
	*/
	if (ac != 4)
		return (std::cout << "Bad arguments" << std::endl, 1);
	// B. Open file input and set output
	inFile.open(av[1]);
	if (!inFile.is_open())
		return (std::cout << "Could not open input file" << std::endl, 1);
	nameOutfile = std::string(av[1]) + ".replace";
	std::ofstream outFile(nameOutfile.c_str());
	// LOOP
	getline(inFile, line);
	// while (getline(inFile, line))
	//{
	std::cout << line << std::endl;
	processedline = processLine(line, av[2], av[3]);
	if (outFile.is_open())
		outFile << processedline << std::endl;
	else
		return (std::cout << "Could not open output file" << std::endl, 1);
	//}
	// C. Read line
	// D. Replace words in line
	// E. Put final line in file
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