#include "Harl.hpp"
#include <iostream>

int	str2Level(std::string inputString)
{
	if (inputString == "DEBUG")
		return (1);
	else if (inputString == "INFO")
		return (2);
	else if (inputString == "WARNING")
		return (3);
	else if (inputString == "ERROR")
		return (4);
	return (-1);
}

int	main(int ac, char **av)
{
	Harl instanceHarl;
	int key;

	if (ac == 2)
	{
		key = str2Level(av[1]);
		switch (key)
		{
		case 1:
			instanceHarl.complain("DEBUG");
			instanceHarl.complain("INFO");
			instanceHarl.complain("WARNING");
			instanceHarl.complain("ERROR");
			break ;
		case 2:
			instanceHarl.complain("INFO");
			instanceHarl.complain("WARNING");
			instanceHarl.complain("ERROR");
			break ;
		case 3:
			instanceHarl.complain("WARNING");
			instanceHarl.complain("ERROR");
			break ;
		case 4:
			instanceHarl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		}
	}
	else
		std::cout << "Invalid number of arguments" << std::endl;
}