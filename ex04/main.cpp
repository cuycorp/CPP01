#include <iostream>
#include <string>
#include <fstream>


int main(int ac, char **av)
{
    std::string line;
    std::ifstream inFile;
    std::string nameOutfile;
    
    //A. error handling
        /*
        1. wrong No arguments
        2. infile does not exist or cant be opened
        3. s1="" and/ s2=""
        * case for empty file
        */
    if (ac != 4)
        return (std::cout << "Bad arguments" << std::endl, 1);
    //B. Open file input and set output
    inFile.open(av[1]);
    if (!inFile.is_open())
        return (std::cout << "Could not open input file" << std::endl, 1);
    nameOutfile = av[1] + ".replace";
    std::ofstream outFile(nameOutfile);
    if (!outFile.is_open())
        return (std::cout << "Could not open output file" << std::endl, 1);
    //C. Read 
    //D. Replace words in line
    //E. Put final line in file
}

