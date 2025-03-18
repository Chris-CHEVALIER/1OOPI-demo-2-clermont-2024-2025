#include "Character.cpp"
#include "Warrior.cpp"
#include "Wizard.cpp"

int main()
{
    Warrior geralt("Geralt", 20, 8, 40);
    Wizard triss("Triss", 80, 200);
    geralt.rename("Geralt de Riv");
    geralt.takeLifePotion(60);
    triss.castASpell();
    geralt.attack(triss);
    triss.display();
    geralt.display();
    cout << geralt.getAtkPoints() << endl;
    cout << geralt.getArmorPoints() << endl;
    return 0;
}