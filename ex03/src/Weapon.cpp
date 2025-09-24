#include "Weapon.hpp"

Weapon::Weapon(std::string typeName) : type(typeName)
{
    return ;
}
Weapon::~Weapon(void)
{
	return ;
}
const std::string&  Weapon::getType(void) const
{
    return (this->type);
}
void	Weapon::setType(std::string value)
{
    this->type = value;
}