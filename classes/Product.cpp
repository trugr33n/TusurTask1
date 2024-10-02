#include <iostream>
#include "Product.h"

Product::Product(std::string name, std::string descript, double cost){
    _name = name;
    _description = descript;
    _cost = cost;
}

std::string Product::GetName(){
    return _name;
}

void Product::SetName(std::string name){
    _name = name;
}

std::string Product::GetDescription(){
    return _description;
}

void Product::SetDescription(std::string descript){
    _description = descript;
}

double Product::GetCost(){
    return _cost;
}

void Product::SetCost(double cost){
    _cost = cost;
}