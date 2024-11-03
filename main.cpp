#include <iostream>
#include <vector>
#include "Crossbowman.hpp"
#include "EarthElemental.hpp"
#include "Creature.hpp"

int main() {
    srand(time(nullptr));

    std::vector<Creature*> creatures;
    const int CONST_CREATURES = 10;

    for (int i = 0; i < CONST_CREATURES; i++) {
        if (i % 2 == 0) {
            int quantity = rand();
            int hPoints = rand();
            int eDmg = rand();
            int physDamage = rand();
            std::cout << "EarthElemental (creature number " << i+1 << "): quantity = " << quantity
            << ", hit points = " << hPoints << ", elemental damage = " << eDmg
            << ", physical damage = " << physDamage << std::endl;
            creatures.push_back(new EarthElemental(quantity, hPoints, eDmg, physDamage));
        } else {
            int quantity = rand();
            int hPoints = rand();
            int rangDmg = rand();
            std::cout << "Crossbowman (creature number " << i+1 << "): quantity = " << quantity
            << ", hit points = " << hPoints << ", ranged damage = " << rangDmg << std::endl;
            creatures.push_back(new Crossbowman(quantity, hPoints, rangDmg));
        }
    }
    std::cout << std::endl;

    for (Creature *creature: creatures) {
        std::cout << "=//=> Calculate damage  = " << creature->CalculateDamage() << std::endl;

        delete creature;
    }
    return 0;
}
