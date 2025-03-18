#include <iostream>
using namespace std;
#pragma once

class Character
{
protected:
    string name;
    int life;

public:
    Character();
    Character(string newName, int newLife);
    string getName() const;
    void rename(string newName);
    void takeLifePotion(int lifePoints);
    void setLife(int newLife);
    void display() const;
};