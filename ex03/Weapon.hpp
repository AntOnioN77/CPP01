#pragma once
#include <string>

class Weapon
{
    private:
    std::string type;

    public:
    Weapon();
    Weapon(const Weapon& src);
    Weapon(const std::string& weapon_type);
    Weapon& operator=(const Weapon& src);
    ~Weapon();

    const std::string& getType();
    void setType(const std::string& weapon);
};