#include "Weapon.hpp"
#include "HumanB.hpp"
#include <ostream>
#include <iostream>

HumanB::HumanB(const std::string& name)
{
    this->name = name;
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
    }
    return *this;
}

HumanB::~HumanB()
{}

void HumanB::attack()
{
    std::cout << name << " attack with " << weapon->getType() << std::endl;
}


void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}