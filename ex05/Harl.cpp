#include "Harl.hpp"
#include <iostream>

void Harl::debug( void )
	{
		std::cout <<"debug: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
			<<std::endl;
	}
	void Harl::info( void )
	{
		std::cout <<"info: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			<<std::endl;
	}
	void Harl::warning( void )
	{
		std::cout <<"warning: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
			<<std::endl;
	}
	void Harl::error( void )
	{
		std::cout <<"error: This is unacceptable! I want to speak to the manager now."
			<<std::endl;
	}

	void Harl::complain( std::string level )
	{
		int i;
		for(i=0; i<4 && name_array[i].compare(level) != 0; i++)
		{}
		if(i == 4) //un solo if, para evitar acceso invalido al array func_array
			return;
		(this->*func_array[i])();
	}