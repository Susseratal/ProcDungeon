#include <iostream>
#include <string>
#include "item.h"
#include "weapon.h"

#pragma once

using namespace std;

// should definitely have two separate inventories
// inv to store junk
// inv of currently equipped items
// maybe currently equipped is a dictionary to have like 
// armour = x
// weapon = y
// etc

namespace C
{
    class Character
    {
        public:
            struct {
                string name;
                string charClass;
                int health;
                int gold;
            } data;

            Character(string nameInit, string charClassInit, int healthInit, int goldInit);

            void characterSheet(string spacer);
    };
}
