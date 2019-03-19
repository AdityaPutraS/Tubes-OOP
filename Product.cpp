#include "Product.h"

Product::Product(string _name, int _price){
    name = _name;
    price = _price;
}

string Product::getName() const{
    return name;
}

int Product::getPrice() const{
    return price;
}

void Product::setName(string _name){
    name = _name;
}

void Product::setPrice(int _price){
    price = _price;
}

FarmProduct::FarmProduct(string _name, int _price):Product(_name, _price){
}