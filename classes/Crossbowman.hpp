#ifndef CROSSBOWMAN_HPP
#define CROSSBOWMAN_HPP
#include "Creature.hpp"

class Crossbowman : public Creature{
private:
    int _rangedDamage;
public:
    void SetDamage(int rangDmg);
    int GetDamage();

    void SetQuantity(int num) override;
    void SetHitPoints(int num) override;
    int GetQuantity() override;
    int GetHitPoints() override;
    int CalculateDamage() override;

    Crossbowman(int quantity, int hPoints, int rangDmg);
};

#endif
