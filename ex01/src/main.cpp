#include "Zombie.hpp"
#include <string>

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie *zombies;
	int i;

	zombies = zombieHorde(3, "Richard");
	for (i = 0; i < 3; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}