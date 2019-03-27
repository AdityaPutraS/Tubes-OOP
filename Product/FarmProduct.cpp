#include "FarmProduct.h"


FarmProduct::FarmProduct(string _type):Product(){
    type = _type;
}
FarmProduct::FarmProduct(int _price, string _type): Product(_price){
    type = _type;
}
string FarmProduct::getType(){
    return type;
}