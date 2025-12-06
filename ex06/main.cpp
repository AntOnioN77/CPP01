#include "Harl.hpp"
#include <string>
#include <iostream>

int main( int argc, char** argv )
{
    if(argc < 2 || argv[1][0] == '\0')
    {
        std::cout <<"Argumentos invalidos\n";
        return 1;
    }

    Harl harl;

    std::string level = argv[1];
    const std::string lvls_filter[4] = {"DEBUG", "INFO","WARNING", "ERROR"};
    int i;
    for(i = 0; i < 4 && (level.compare(lvls_filter[i]) != 0); i++)
    {}

    switch (i)
    {
        case 0:
            std::cout << "DEBUG" << std::endl;
            harl.complain("DEBUG");
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case 1:
            std::cout << "INFO" << std::endl;
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case 2:
            std::cout << "WARNING" << std::endl;
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case 3:
            std::cout << "ERROR" << std::endl;
            harl.complain("ERROR");
            break;
        default:
            std::cout << "Probably complaining about insignificant problems" << std::endl;
    }
}