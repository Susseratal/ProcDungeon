#include <iostream>
#include <string>

#include "character.h"
#include "item.h"
#include "customLib.h"

using namespace std;
using namespace C;
using namespace I;
using namespace L;

Character::Character(string nameInit, string charClassInit, int healthInit, int goldInit)
{
    data.name = nameInit;
    data.charClass = charClassInit;
    data.health = healthInit;
    data.gold = goldInit;
}

void Character::characterSheet(string spacer)
{
    cout << spacer;
    cout << "Name: " << data.name << "\n";
    cout << "Class: " << data.charClass << "\n";
    cout << "Health: " << data.health << "\n";
    cout << "Gold: " << data.gold << "\n";
    cout << "Inventory: \n";
    /*
    for (Item i : inventory)
    {
        cout << "   " << i.name << "\n";
    }
    */
    cout << spacer;
}
