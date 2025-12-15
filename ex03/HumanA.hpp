#pragma once
#include "Weapon.hpp"

class HumanA
{
	private:
    std::string name;
    Weapon& weapon;
    HumanA(); 								//privado, es una forma de impedir su uso.
	HumanA& operator=(const HumanA& human);	//puesto que 

    public:
    HumanA(const HumanA& human);			//la copia usa exactamente la misma weapon que el original
    HumanA(const std::string& name, Weapon& weapon);
   
    ~HumanA();
    void attack();
    //setWeapon(Weapon& weapon);//el arma es una referencia
};
