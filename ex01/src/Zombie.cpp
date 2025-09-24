#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return ;
}
Zombie::Zombie(std::string str_name)
{
    this->name = str_name;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << "Destroyed a Zombie named: " << this->name << std::endl;
    return ;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}

void Zombie::assignName(std::string zombieName)
{
    this->name = zombieName;
}