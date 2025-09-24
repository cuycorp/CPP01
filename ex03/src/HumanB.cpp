#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string theName) : name(theName)
{
}

HumanB::~HumanB(void)
{
	std::cout << "Human B destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon& aWeapon)
{
    this->itsWeapon = &aWeapon; //& operator takes the address, converts reference to pointer
}

void HumanB::attack(void)
{
	if (this->itsWeapon)
		std::cout << this->name << " attacks with their weapon " << (this->itsWeapon)->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon " << std::endl;
}