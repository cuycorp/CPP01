#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
  private:
	std::string name;
	Weapon& itsWeapon;

  public:
	HumanA(std::string theName, Weapon& aWeapon);
	~HumanA(void);
	void attack(void);
};
#endif