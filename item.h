#include <string>

#pragma once

namespace I
{
    class Item
    {
        protected: // can be seen and changed by objects inheriting from this class
            // nothing here

        private: // can't be seen or changed by anything at all
            // nothing here yet

        public: // can be seen and changed by anything
            std::string name;
            int val;
            Item(std::string nameInit, int valInit, int damageInit);
    };

    class Treasure: public Item
    {
        // men
    };

    class Weapon: public Item
    {
        public:
            int damage;

            // Weapon(int damageInit);
    };
}
