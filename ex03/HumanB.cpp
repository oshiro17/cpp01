#include "HumanB.hpp"

HumanB::HumanB(std::string name):_weapon(NULL), _name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack(void)
{
	if(this->_weapon != NULL && this->_weapon->getType() != "")
		std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << _name << " doesn't have a weapon to attack." << std::endl;
}