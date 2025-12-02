#include <string>
#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    //std::cout <<"string: " << string << std::endl;
    std::string* stringPTR = &string;
    //std::cout <<"stringPTR: "  << *stringPTR << std::endl;
    std::string& stringREF = string;
    //std::cout <<"stringREF: "  << stringREF << std::endl;
    std::cout << "memory address of the string variable: " <<  &string << "\n";
    std::cout << "memory address held by stringPTR: " << stringPTR << "\n";
    std::cout << "memory address held by stringREF: " << &stringREF << "\n";

    std::cout << "value of the string variable: " << string << "\n";
    std::cout << "value of the stringPTR variable: " << *stringPTR << "\n";
    std::cout << "value of the stringREF variable: " << stringREF << "\n";
}