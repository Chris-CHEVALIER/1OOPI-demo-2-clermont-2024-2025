#include "Character.hpp"

Character::Character()
{
    name = "John";
    life = 100;
}

Character::Character(string newName, int newLife)
{
    name = newName;
    life = newLife;
}

string Character::getName() const
{
    return name;
}

void Character::rename(string newName)
{
    name = newName;
}

void Character::takeLifePotion(int lifePoints)
{
    life += lifePoints;
    if (life > 100)
    {
        life = 100;
    }
}

void Character::setLife(int newLife)
{
    life = newLife;
}

void Character::display() const
{
    cout << name << " a " << life << " points de vie." << endl;
}