#include <iostream>
#include <string>

int	main(void)
{
	std::string str;
	std::string *stringPTR;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;

	// printing memory address
	std::cout << "memory address held by string variable :" << &str << std::endl;
	std::cout << "memory address held by stringPTR :" << stringPTR << std::endl;
	std::cout << "memory address held by stringREF :" << &stringREF << std::endl;

	// printing pointed value
	std::cout << "value held by string variable :" << str << std::endl;
	std::cout << "value held by stringPTR :" << *stringPTR << std::endl;
	std::cout << "value held by stringREF :" << stringREF << std::endl;
}