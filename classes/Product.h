#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>

class Product{
private:
    std::string _name;
    std::string _description;
    double _cost;
public:
    std::string GetName();
    std::string GetDescription();
    double GetCost();
    void SetName(std::string name);
    void SetDescription(std::string descript);
    void SetCost(double cost);

    Product(std::string name, std::string descript, double cost);
};

#endif 
