#include "Crossbowman.hpp"

void Crossbowman::SetDamage(int rangDmg) {
    _rangedDamage = rangDmg;
}

int Crossbowman::GetDamage() {
    return _rangedDamage;
}

void Crossbowman::SetQuantity(int num) {
    _quantity = num;
}

int Crossbowman::GetQuantity() {
    return _quantity;
}

void Crossbowman::SetHitPoints(int num) {
    _hitPoints = num;
}

int Crossbowman::GetHitPoints() {
    return _hitPoints;
}

int Crossbowman::CalculateDamage() {
    return _quantity * _rangedDamage;
}

Crossbowman::Crossbowman(int quantity, int hPoints, int rangDmg) {
    _quantity = quantity;
    _hitPoints = hPoints;
    _rangedDamage = rangDmg;
}

