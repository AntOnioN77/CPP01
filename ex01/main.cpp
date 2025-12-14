#include "Zombie.hpp"

int main(void)
{
    Zombie* horde;
    int n_zombies = 8;

    horde = zombieHorde(n_zombies, "Peter");
    for(int i=0; i<n_zombies; i++)
    {
        horde[i].announce();
    }
    delete[] horde;

}