#include "Product/Product.h"


Product::Product(){
    price = 0;
}
Product::Product(int _price){
    price = _price;
}
void Product::sell(){
    //nambahin duit player
    //destruk objek
}
int Product::getPrice() const{
    return price;
}
void Product::setPrice(int _price){
    price = _price;
}