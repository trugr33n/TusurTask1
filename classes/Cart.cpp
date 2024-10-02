#include <iostream>
#include <vector>
#include "Cart.h"
#include "Product.h"

std::vector<Product> Cart::GetProducts(){
    return _products;
}

void Cart::SetProducts(std::vector<Product> product){
    _products = product;
}

int Cart::GetProductsCount(){
    return _productsCount;
}

void Cart::SetProductsCount(int count){
    _productsCount = count;
}

Cart::Cart(std::vector<Product> product, int cost){
    _products = product;
    _productsCount = cost;
}

double Cart::GetFullCost(){
    double counter;
    for(std::vector<Product>::iterator vec_counter = _products.begin(); vec_counter != _products.end(); vec_counter++){
        counter += vec_counter->GetCost();
    }

    return counter;
}