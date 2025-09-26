#include <string>

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