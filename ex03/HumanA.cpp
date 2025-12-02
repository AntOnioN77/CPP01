#include"Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon) : weapon(weapon), name(name)
{
}

/*
HumanA::HumanA(const HumanA& human)
{
    *this = human;
}
*/

HumanA& HumanA::operator=(const HumanA& human)
{
    if(this != &human)
    {
        name = human.name;
        weapon = human.weapon;
    }
    return *this;
}

HumanA::~HumanA()
{}

void HumanA::attack()
{
    std::cout << name << " attack with " << weapon.getType() << std::endl;
}
//setWeapon(Weapon& weapon);//el arma es una referencia