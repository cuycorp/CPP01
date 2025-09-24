#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *pointerZombie = new Zombie(name);
	return (pointerZombie);
}