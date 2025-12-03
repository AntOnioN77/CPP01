#include <string>

class Harl
{
    private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    void (Harl::*func_array[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error} ;
    std::string name_array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    public:
    void complain( std::string level );

};