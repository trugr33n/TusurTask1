#include <iostream>
#include <vector>
#include "ProductList.h"
#include "Product.h"

std::vector<Product> ProductsList::GetProducts(){
    return _products;
}

void ProductsList::SetProducts(std::vector<Product> product){
    _products = product;
}

int ProductsList::GetProductsCount(){
    return _productCounts;
}

void ProductsList::SetProductsCount(int count){
    _productCounts = count;
}

std::string ProductsList::GetCategory(){
    return _category;
}

void ProductsList::SetCategory(std::string category){
    _category = category;
}

ProductsList::ProductsList(std::vector<Product> product, int count, std::string category){
    _products = product;
    _productCounts = count;
    _category = category;
}