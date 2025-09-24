#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
  private:
	std::string name;
	Weapon& itsWeapon;

  public:
	HumanB(void);
	~HumanB(void);
	void attacks(void);
};

#endif