#include <filesystem>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>

#include "item.h"
#include "character.h"
#include "customLib.h"

using namespace std;
using namespace I;
using namespace C;
using namespace L;

Lib lib;

int main(int argc, char *argv[])
{
    // create arrays for treasure, different types of weapons and stuff like that
    // could use a struct called "loot table" which just holds arrays of different items
    // maybe create a csv or something to extract all the different information and just iterate over it?

    // list all classes of character - i.e. warrior, rogue and mage so that player can choose

    /*
    string path = "Saves";
    for (const auto & entry : filesystem::directory_iterator(path))
    {
        string fn = to_string(entry);
        if (fn.substr(fn.find_last_of(".") + 1) == "sav")
        {
            cout << entry.path() << "\n";
        }
    }
    */

    // if the name character sheet exists, open it
    // if the name character sheet doesn't exist, make it 

    // open saves dir > list contents of directory > Offer input choice: load save or new character
    // if load save > load save
    // if new character > new character

    int characterClass;
    string charClass;
    string characterName;

    cout << "Choose your character class: \n";
    cout << "   (1) Knight\n";
    cout << "   (2) Rogue\n";
    cout << "   (3) Mage\n";
    cin >> characterClass;
    switch(characterClass)
    {
        case 1:
            charClass = "Knight";
            break;
        case 2:
            charClass = "Rogue";
            break;
        case 3:
            charClass = "Mage";
            break;
        default:
            charClass = "Knight";
            break;
    }

    cout << "Name your new character: \n";
    cin >> characterName;
    characterName = lib.titleCase(characterName); // get formatted coward
    Character player = Character(characterName, charClass, 100, 0); // construct a player object
    player.characterSheet(lib.spacer);

    /*
    string name = (argv[1]); // remember to not just recompile with this enabled
    name[0] = toupper(name[0]);
    Character player = Character(name, 100, 0); // we have character init
    player.characterSheet();
    */
    return 0;
}

// i don't know I can't think straight enough to do anything
