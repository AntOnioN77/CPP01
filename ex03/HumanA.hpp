#pragma once
#include "Weapon.hpp"

class HumanA
{
    std::string name;
    Weapon& weapon;

    public:
    HumanA();
    //HumanA(const HumanA& human);
    HumanA(const std::string& name, Weapon& weapon);
    HumanA& operator=(const HumanA& human);
    ~HumanA();
    void attack();
    //setWeapon(Weapon& weapon);//el arma es una referencia
};
