#ifndef FILEREADER_HPP
# define FILEREADER_HPP

#include <fstream>
class FileReader
{
    private:
        std::ifstream inFile;
    public:
        FileReader(std::string filename);
        ~FileReader(void);
        bool getNextLine(std::string& line);  
};

#endif