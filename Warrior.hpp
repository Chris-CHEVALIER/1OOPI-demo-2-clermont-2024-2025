#include "Character.hpp"

class Warrior : public Character
{
private:
    int atkPoints;
    int armorPoints;

public:
    Warrior(string newName, int newLife, int newAtkPoints, int newArmorPoints);
    void attack(Character &target);
    int getAtkPoints() const;
    int getArmorPoints() const;
    void display() const;
};