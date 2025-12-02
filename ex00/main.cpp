#include "Zombie.hpp"
#include "Zombie.h"
#include <iostream>
#include <cstdlib>
#include <sstream>

int	main()
{
	int n_zombies;
	std::string imput;
	Zombie** heap_zombies;
	std::stringstream name;
	std::string str_name;

	/*Cuando queremos crear una cantidad de zombies desconocida en
		tiempo de compilacion usamos memoria dinamica newZombie() */
	std::cout << "Introduce extra Zombies >";
	std::cin >> imput;
	n_zombies = std::strtol(imput.c_str(), NULL, 10);
	n_zombies = std::abs(n_zombies);

	
	if (n_zombies > 0)
	{
		heap_zombies = new Zombie*[n_zombies];
		for(int i = 0; i < n_zombies; i++)
		{
			name << "Heap_zombie_" << i;
			str = name.str();
			heap_zombies[i] = new Zombie(str);
			name.str("");
			heap_zombies[i]->announce();
		}
	}

	//llamadas a random chump, crean zombies que son destuidos al salir del scoop de randomChump()
	for(int i = 0; i < 5; i++)
	{
		name << "Stack_zombie_" << i;
		str = name.str();
		randomChump(str);
		name.str("");
	}


	for(int i = 0; i < n_zombies; i++)
	{
		delete heap_zombies[i];
	}
	delete[] heap_zombies;
}
