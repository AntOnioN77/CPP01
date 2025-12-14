#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>

class Zombie
{
private:
	std::string name;

public:
	// Orthodox Canonical Form
	Zombie();
	Zombie(const Zombie& other);           // Copy constructor
	Zombie& operator=(const Zombie& other); // Assignment operator
	~Zombie();                                   // Destructor

	// Additional constructors and methods
	Zombie(const std::string& name);
	void announce( void );	//deberia declararla const puesto que no modifica
							// el objeto. pero el subject la prototipa asi
};

Zombie* newZombie( const std::string& name );
void randomChump( const std::string& name );


#endif