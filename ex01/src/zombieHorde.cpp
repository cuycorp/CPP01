#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;
    Zombie *zombies = new Zombie[N];

    for (i = 0; i < N; i++)
        zombies[i].assignName(name);

    return (zombies);
}