#pragma once
#include "Weapon.hpp"
#include <string>

class HumanB
{
    std::string name;
    Weapon* weapon;

    public:
    HumanB();
    HumanB(const HumanB& human);
    HumanB(const std::string& name);
    HumanB& operator=(const HumanB& human);
    ~HumanB();
    void attack();
    void setWeapon(Weapon& weapon);
};