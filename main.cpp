#include <iostream>
#include <vector>
#include "Cart.h"
#include "Product.h"
#include "ProductList.h"

void vector_container_display(std::vector<Product> pattern_vector, std::string pattern_script, std::string pattern_description, std::string sep);

int main(){
    setlocale(LC_ALL, "Russia");

    std::vector<Product> products = {
        Product("Вино", "Алкогольный напиток из винограда", 5000),
        Product("Дюшес", "Грушевая газировка \"Прямиком из детства\"", 65.5),
        Product("Сок", "Свежевыжитый сок из банана и яблока", 100.99),
        Product("Молоко", "Пейте дети молоко - будете здоровы!", 79.89),
        Product("Пепси", "Американский напиток с приятным вкусом и секретным рецептом", 200.49)
    };

    ProductsList list_of_products(products, products.size(), "Напитки");

    std::vector<Product> products_in_cart = {
        products[4],
        products[3],
        products[1]
    };

    Cart my_cart(products_in_cart, products_in_cart.size());


    vector_container_display(
        list_of_products.GetProducts(),
        "В данном динамическом массиве(векторе) находятся данные продукты для списка продуктов:",
        "В объекте массива: первое - название продукта, второе - описание продукта, а третье - цена продукта",
        ", "
    );
    std::cout << "Колличество продуктов в списке составляет - " <<
     list_of_products.GetProductsCount() << ", а его категорией - " << list_of_products.GetCategory() << "\n\n";

    vector_container_display(
        my_cart.GetProducts(),
        "В данном динамическом массиве(векторе) находятся данные продукты для тележки:",
        "В объекте массива: первое - название продукта, второе - описание продукта, а третье - цена продукта",
        ", "
    );
    std::cout << "Колличество продуктов в тележке составляет - " << my_cart.GetProductsCount() <<
     ", а полная цена всех товаров в ней равна " << my_cart.GetFullCost() << "\n\n";

    return 0;
}

void vector_container_display(std::vector<Product> pattern_vector, std::string pattern_script, std::string pattern_description, std::string sep){
    std::cout << pattern_script << std::endl;
    for(std::vector<Product>::iterator vec_counter = pattern_vector.begin(); vec_counter != pattern_vector.end(); vec_counter++){
        std::cout << vec_counter->GetName() << sep << vec_counter->GetDescription() << sep << vec_counter->GetCost() << std::endl;
    }
    std::cout << '\n'+pattern_description << std::endl << "--------------" << std::endl;
}