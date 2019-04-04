#include "../../include/Product/Product.h"


Product::Product(string _name){
    price = 0;
    name = _name;
}
Product::Product(int _price, string _name){
    price = _price;
    name = _name;
}
int Product::getPrice() const{
    return price;
}
void Product::setPrice(int _price){
    price = _price;
}

string Product::getName() const{
    return name;
}
void Product::setName(int _name){
    price = _name;
}

bool Product::operator==(const Product& P) const
{
    return price == P.price && name == P.name;
}