#ifndef CREATURE_HPP
#define CREATURE_HPP

class Creature{
protected:
    int _hitPoints;
    int _quantity;
public:
    virtual void SetQuantity(int num) = 0;
    virtual int GetQuantity() = 0;
    virtual void SetHitPoints(int num) = 0;
    virtual int GetHitPoints() = 0;
    virtual int CalculateDamage() = 0;

    virtual ~Creature() = default;
};

#endif
