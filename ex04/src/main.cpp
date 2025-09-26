#include "main.hpp"
#include <fstream>
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	std::string line;
	std::string processedline;
	std::string nameOutfile;
	try
	{
		if (ac != 4)
			throw std::runtime_error("Bad number of arguments");
		if (std::string(av[2]).length() == 0
			|| std::string(av[3]).length() == 0)
			throw std::runtime_error("Empty strings are not accepted");
		FileReader inFile("test/" + std::string(av[1]));
		nameOutfile = std::string(av[1]) + ".replace";
		std::ofstream outFile(nameOutfile.c_str());
		while (inFile.getNextLine(line))
		{
			processedline = processLine(line, av[2], av[3]);
			if (outFile.is_open())
				outFile << processedline << std::endl;
			else
				throw std::runtime_error("Could not open output file");
		}
	}
	catch (std::exception &e)
	{
		std::cout << "👺 Error caught exception: " << e.what() << std::endl;
	}
}
/*
	Sections of the program
	//A. error handling
		1. wrong No arguments - done
		2. infile does not exist or cant be opened - done
		3. s1="" and/ s2=""
		4. * case for empty file
	//B. Open file input and set output
	//C. Read line
	//D. Replace words in line
	//E. Put final line in file
*/