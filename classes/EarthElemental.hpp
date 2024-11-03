#ifndef EARTHELEMENTAL_HPP
#define EARTHELEMENTAL_HPP
#include "Creature.hpp"

class EarthElemental : public Creature{
private:
    int _elementalDamage;
    int _physicalDamage;
public:
    void SetDamage(int eDmg, int physDmg);
    int GetDamage(bool tumbler);

    void SetQuantity(int num) override;
    int GetQuantity() override;
    void SetHitPoints(int num) override;
    int GetHitPoints() override;
    int CalculateDamage() override;

    EarthElemental(int quantity, int hPoints, int eDmg, int physDmg);
};

#endif
