#include "EarthElemental.hpp"

void EarthElemental::SetDamage(int eDmg, int physDmg) {
    _elementalDamage = eDmg;
    _physicalDamage = physDmg;
}

int EarthElemental::GetDamage(bool tumbler) {
    switch (tumbler) {
        case true:
            return _elementalDamage;
            break;
        case false:
            return _physicalDamage;
            break;
    }
}

void EarthElemental::SetQuantity(int num) {
    _quantity = num;
}

int EarthElemental::GetQuantity() {
    return _quantity;
}

void EarthElemental::SetHitPoints(int num) {
    _hitPoints = num;
}

int EarthElemental::GetHitPoints() {
    return _hitPoints;
}

int EarthElemental::CalculateDamage() {
    return _quantity * _physicalDamage + _elementalDamage;
}

EarthElemental::EarthElemental(int quantity, int hPoints, int eDmg, int physDmg) {
    _quantity = quantity;
    _hitPoints = hPoints;
    _elementalDamage = eDmg;
    _physicalDamage = physDmg;
}
