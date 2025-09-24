#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string theName, Weapon& aWeapon) :name(theName), itsWeapon(aWeapon)
{
}

HumanA::~HumanA(void)
{
	std::cout << "Human A destroyed" << std::endl;
}
void	HumanA::attack(void)
{
    std::cout << this->name << " attacks with their weapon " << (this->itsWeapon).getType() << std::endl;
}