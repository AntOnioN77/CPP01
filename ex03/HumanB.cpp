#include "Weapon.hpp"
#include "HumanB.hpp"
#include <ostream>
#include <iostream>

HumanB::HumanB(const std::string& name)
{
    this->name = name;
	this->weapon = NULL;
}

HumanB::HumanB(const HumanB& human)
{
    *this = human;
}

HumanB& HumanB::operator=(const HumanB& human)
{
    if(this != &human)
    {
        name = human.name;
		weapon = human.weapon;
    }
    return *this;
}

HumanB::HumanB() : name("Default"), weapon(NULL)
{}

HumanB::~HumanB()
{}

void HumanB::attack()
{
	if (this->weapon == NULL)
 std::cout << name << " attack unarmed" << std::endl;
	else
	    std::cout << name << " attack with " << weapon->getType() << std::endl;
}


void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}