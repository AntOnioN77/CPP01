#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cerrno>

int	main(void)
{
	long n_zombies;
	std::string input;
	Zombie** heap_zombies;
	std::stringstream name;
	std::string str_name;

	/*Cuando queremos crear una cantidad de zombies desconocida en
		tiempo de compilacion usamos memoria dinamica newZombie() */
	std::cout << "Enter extra Zombies > ";
	std::cin >> input;
	errno = 0;
	n_zombies = std::strtol(input.c_str(), NULL, 10);

	
	if (errno != ERANGE && n_zombies >= 0 && n_zombies <= 100)
	{
		heap_zombies = new Zombie*[n_zombies];
		for(long i = 0; i < n_zombies; i++)
		{
			name << "Heap_zombie_" << i;
			str_name = name.str();
			heap_zombies[i] = newZombie(str_name);
			name.str("");
			heap_zombies[i]->announce();
		}
	}
	else
	{
		std::cout << "Invalid input. MAX:100 MIN:0" << std::endl;
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


	for(long i = 0; i < n_zombies; i++)
	{
		delete heap_zombies[i];
	}
	delete[] heap_zombies;

	return (0);
}
