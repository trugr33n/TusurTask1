#ifndef PRODUCTLIST_H
#define PRODUCTLIST_H
#include <iostream>
#include <vector>
#include "Product.h"

class ProductsList{
private:
    std::vector<Product> _products;
    int _productCounts;
    std::string _category;
public:
    std::vector<Product> GetProducts();
    int GetProductsCount();
    std::string GetCategory();
    void SetProducts(std::vector<Product> prod);
    void SetProductsCount(int count);
    void SetCategory(std::string category);
    ProductsList(std::vector<Product> product, int count, std::string category);
};
#endif
