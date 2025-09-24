#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
    Zombie *pointerZombie;
    
    pointerZombie = newZombie("Richard");
    pointerZombie->announce();
    delete pointerZombie; //Richard destroyed
    randomChump("Felix"); 
    return (0); //Felix destroyed
}