#include "Zombie.hpp"
#include <iostream>
#include <string>

// Default constructor
Zombie::Zombie(): name("no_name") 
{}

Zombie::Zombie(const std::string& z_name): name(z_name) 
{}

// Copy constructor
Zombie::Zombie(const Zombie& other): name(other.name)
{}

// Assignment operator
Zombie& Zombie::operator=(const Zombie& other)
{
	if (this != &other)
	{
		name = other.name;
	}
	return *this;
}

// Destructor
Zombie::~Zombie()
{
	std::cout << name << " Was destroyed!!" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}
