#include <iostream>
#include <vector>
#include "Cart.h"
#include "Product.h"
#include "ProductList.h"

void vector_container_display(std::vector<Product> pattern_vector, std::string pattern_script, std::string pattern_description, std::string sep);

int main(){
    setlocale(LC_ALL, "Russian");

    std::vector<Product> products = {
        Product("Wine", "Alcoholic drink made from grapes", 5000),
        Product("Pear soda", "Fresh soda \"Straight from childhood\"", 65.5),
        Product("Juice", "Freshly squeezed banana and apple juice", 100.99),
        Product("Milk", "Too much dairy?", 79.89),
        Product("Pepsi", "An American drink with a pleasant taste and a secret recipe", 200.49)
    };

    //Создание объекта list_of_products через указатель
    ProductsList* list_of_products = new ProductsList(products, products.size(), "Drinks");

    std::vector<Product> products_in_cart = {
        products[4],
        products[3],
        products[1]
    };

    //Создание объекта my_cart через указатель
    Cart* my_cart = new Cart(products_in_cart, products_in_cart.size());


    vector_container_display(
        list_of_products->GetProducts(),
        "This dynamic array (vector) contains these products for the list of products:",
        "In the array object: the first is the product name, the second is the product description, and the third is the product price",
        ", "
    );
    std::cout << "The number of products in the list is - " <<
     list_of_products->GetProductsCount() << ", and it\'s category - " << list_of_products->GetCategory() << "\n\n";

    vector_container_display(
        my_cart->GetProducts(),
        "This dynamic array (vector) contains these products for the cart:",
        "In the array object: the first is the product name, the second is the product description, and the third is the product price",
        ", "
    );
    std::cout << "The number of products in the cart is - " << my_cart->GetProductsCount() <<
     ", and the total price of all the goods in it is equal to " << my_cart->GetFullCost() << "\n\n";

    //Освобождение памяти и возвращение нуля в main
    delete my_cart;
    delete list_of_products;
    return 0;
}

void vector_container_display(std::vector<Product> pattern_vector, std::string pattern_script, std::string pattern_description, std::string sep){
    std::cout << pattern_script << std::endl;
    for(std::vector<Product>::iterator vec_counter = pattern_vector.begin(); vec_counter != pattern_vector.end(); vec_counter++){
        std::cout << vec_counter->GetName() << sep << vec_counter->GetDescription() << sep << vec_counter->GetCost() << std::endl;
    }
    std::cout << '\n'+pattern_description << std::endl << "--------------" << std::endl;
}