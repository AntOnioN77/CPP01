#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <limits.h>

int	main(int argc, char **argv)
{
	int n_zombies;
	std::string imput;
	Zombie** heap_zombies;
	std::stringstream name;
	std::string str_name;

	if(argc > 1)
	{
		std::cout << "Execute vithout args\n";
		return 1;
	}

	/*Cuando queremos crear una cantidad de zombies desconocida en
		tiempo de compilacion usamos memoria dinamica newZombie() */
	std::cout << "Introduce extra Zombies > ";
	std::cin >> imput;
	n_zombies = std::strtol(imput.c_str(), NULL, 10);

	
	if (n_zombies >= 0 && n_zombies < INT_MAX)
	{
		heap_zombies = new Zombie*[n_zombies];
		for(int i = 0; i < n_zombies; i++)
		{
			name << "Heap_zombie_" << i;
			str_name = name.str();
			heap_zombies[i] = new Zombie(str_name);
			name.str("");
			heap_zombies[i]->announce();
		}
	}
	else
	{
		std::cout << "Invalid request" << std::endl;
		return 0;
	}

	//llamadas a random chump, crean zombies que son destuidos al salir del scoop de randomChump()
	for(int i = 0; i < 5; i++)
	{
		name << "Stack_zombie_" << i;
		str_name = name.str();
		randomChump(str_name);
		name.str("");
	}


	for(int i = 0; i < n_zombies; i++)
	{
		delete heap_zombies[i];
	}
	delete[] heap_zombies;
}
