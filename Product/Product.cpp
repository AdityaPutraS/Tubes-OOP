#include "Product.h"


Product::Product(){
    price = 0;
}
Product::Product(int _price){
    price = _price;
}
Product::sell(){
    //nambahin duit player
    //destruk objek
}
Product::getPrice() const{
    return price;
}
Product::setPrice(int _price){
    price = _price;
}