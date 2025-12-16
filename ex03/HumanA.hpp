#pragma once
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon& weapon;
		
		HumanA(); 								//privado, es una forma de impedir su uso.
		HumanA& operator=(const HumanA& human);	//puesto que weapon& seria un objeto usado por dos personajes al mismo tiempo
		HumanA(const HumanA& human);			//

    public:
		HumanA(const std::string& name, Weapon& weapon);   
		~HumanA();
		void attack();
		//setWeapon(Weapon& weapon);//el arma es una referencia
};
