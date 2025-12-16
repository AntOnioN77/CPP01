#include"Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon)
{}

HumanA::~HumanA()
{}

void HumanA::attack()
{
    std::cout << name << " attack with " << weapon.getType() << std::endl;
}
//setWeapon(Weapon& weapon);//el arma es una referencia

//Prohibido su uso, nada que asignar a weapon&
/* HumanA::HumanA(const HumanA& human) : name(human.name), weapon(human.weapon)
{} */

/* HumanA& HumanA::operator=(const HumanA& human)
{
    if(this != &human)
    {
		std::cout << "ewntra operator=\n";
        name = human.name;
        //weapon = human.weapon;//esto seria copiar en weapon= el contenido de  =human.weapon
    }
    return *this;
}  */