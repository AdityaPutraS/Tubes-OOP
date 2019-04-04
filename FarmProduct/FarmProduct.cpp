#include "FarmProduct.h"

FarmProduct::FarmProduct():Product(0){
}
FarmProduct::FarmProduct(string _type, int _price):Product(_price){
    type = _type;
}
string FarmProduct::getType(){
    return type;
}