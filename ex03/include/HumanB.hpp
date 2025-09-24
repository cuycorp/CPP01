#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
  private:
	std::string name;
	Weapon* itsWeapon;

  public:
	HumanB(std::string theName);
	~HumanB(void);
	void attack(void);
	void setWeapon(Weapon& aWeapon);
};

#endif