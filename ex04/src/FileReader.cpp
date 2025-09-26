#include "FileReader.hpp"

FileReader::FileReader(std::string filename)
{
	this->inFile.open(filename.c_str());
	if (!this->inFile.is_open())
		throw std::runtime_error("Could not open file: " + filename);
}
FileReader::~FileReader(void)
{
	if (this->inFile.is_open())
		this->inFile.close();
}
bool FileReader::getNextLine(std::string &line)
{
	if (this->inFile.is_open() && std::getline(this->inFile, line))
		return (true);
	return (false);
}