#include "Warrior.hpp"

Warrior::Warrior(string newName, int newLife, int newAtkPoints, int newArmorPoints) : Character(newName, newLife)
{
    atkPoints = newAtkPoints;
    armorPoints = newArmorPoints;
}

void Warrior::attack(Character &target)
{
    target.setLife(life - 25);
}

int Warrior::getAtkPoints() const
{
    return atkPoints;
}

int Warrior::getArmorPoints() const
{
    return armorPoints;
}

void Warrior::display() const
{
    Character::display();
    cout << "C'est un guerrier avec " << atkPoints << " points d'attaque et " << armorPoints << " points d'armure." << endl;
}