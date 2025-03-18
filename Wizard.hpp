#include "Character.hpp"

class Wizard : public Character
{
private:
    int mana;

public:
    Wizard(string newName, int newLife, int newMana);
    void castASpell();
    void takeManaPotion(int manaPoints);
    void display() const;
};