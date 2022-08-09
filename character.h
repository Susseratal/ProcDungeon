#include "item.h"
#include "weapon.h"
#include <string>

#pragma once

namespace C
{
    class Character
    {
        public:
            std::string name;
            int health;
            int gold;
            Item[] Inventory;

            Character(std::string nameInit);
    };

    class Knight: public Character
    {};

    class Rogue: public Character
    {};

    class Mage: public Character
    {};
}
