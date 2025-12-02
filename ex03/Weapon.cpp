#include "Weapon.hpp"
#include <string>

Weapon::Weapon() : type("nothing")
{}

Weapon::Weapon(const Weapon& src)
{
    if(this != &src)
    {
        *this=src;
    }
}

Weapon::Weapon(const std::string& weapon_type) : type(weapon_type)
{}

Weapon& Weapon::operator=(const Weapon& src)
{
    if(this != &src)
    {
        *this=src;
    }
    return *this;
}

Weapon::~Weapon()
{}

const std::string& Weapon::getType()
{
    return(type);
}


void Weapon::setType(const std::string& weapon)
{
    type = weapon;
}