#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
}
Harl::~Harl(void)
{
	std::cout << "Harl destroyed" << std::endl;
}
void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::string debugString;
	debugString = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.I really do !";
	std::cout << debugString << std::endl;
	std::cout << std::endl;
}
void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::string infoString;
	infoString = "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << infoString << std::endl;
	std::cout << std::endl;
}
void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::string warningString;
	warningString = "I think I deserve to have some extra bacon for free. I’ve been coming foryears, whereas you started working here just last month.";
	std::cout << warningString << std::endl;
	std::cout << std::endl;
}
void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::string errorString;
	errorString = "This is unacceptable! I want to speak to the manager now.";
	std::cout << errorString << std::endl;
	std::cout << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*Comment[])(void) = {&Harl::debug, &Harl::info, &Harl::warning,
		&Harl::error}; 
    /*
    Creating an specific type of pointer to member function of any instance of the
    class Harl
    */
	std::string commentTypes[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == commentTypes[i])
			return ((this->*Comment[i])());
        //calling the type that has been initialized, for the instanc this-> of the class Harl
        }
    std::cout << "Invalid comment" << std::endl;
}