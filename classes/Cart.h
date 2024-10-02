#ifndef CART_H
#define CART_H
#include <iostream>
#include <vector>
#include "Product.h"

class Cart{
private:
    std::vector<Product> _products;
    int _productsCount;
public:
    std::vector<Product> GetProducts();
    int GetProductsCount();
    void SetProducts(std::vector<Product> product);
    void SetProductsCount(int count);
    double GetFullCost();
    Cart(std::vector<Product> product, int count);
};

#endif


