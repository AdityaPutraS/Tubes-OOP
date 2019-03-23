#include "SideProduct.h"


SideProduct::SideProduct():Product(){
    ingredients = new LinkedList<FarmProduct>();
}
SideProduct::SideProduct(int _price): Product(_price){
    ingredients = new LinkedList<FarmProduct>();
}
SideProduct::SideProduct(const SideProduct& SP):Product(SP.getPrice()){
    ingredients = new LinkedList<FarmProduct>();
    //cctor LinkedList SP
}
SideProduct& SideProduct::operator= (const SideProduct& SP){
    //destruk LinkedList
    //cctor LinkedList SP
    return *this;
}
SideProduct::~SideProduct(){
    //delete LinkedList
}
void SideProduct::showIngredients(){
    //show LinkedList
}
void SideProduct::setIngredients(LinkedList<FarmProduct> FP){
    //ngubah farm product
}
void SideProduct::addIngredients(FarmProduct FP){
    //add LinkedList
}