#include "SideProduct.h"
#include <iostream>
using namespace std;


SideProduct::SideProduct(string _type):Product(){
    ingredients = new LinkedList<FarmProduct>();
    type = _type;
}
SideProduct::SideProduct(int _price, string _type): Product(_price){
    ingredients = new LinkedList<FarmProduct>();
    type = _type;
}
SideProduct::SideProduct(const SideProduct& SP):Product(SP.getPrice()){
    ingredients = SP.getIngredients();
    price = SP.getPrice();
    type = SP.getType();
}
SideProduct& SideProduct::operator= (const SideProduct& SP){
    ingredients = SP.getIngredients();
    price = SP.getPrice();
    type = SP.getType();
    return *this;
}
SideProduct::~SideProduct(){
    ~ingredients;
}
void SideProduct::showIngredients(){
    cout>>"Ingredients :">>endl;
    int i=1;
    cout>>i>>". ">>Ingredients.getIsi().getType();
    i++;
    LinkedList<T>*iterator = next;
    while(iterator.getNext()!=nullptr){
        iterator = next;
        cout>>i>>". ">>iterator.getIsi().getType();
        i++;
    }
}
void SideProduct::setIngredients(LinkedList<FarmProduct> FP){
    Ingredients = FP;
}
void SideProduct::addIngredients(FarmProduct FP){
    Ingredients.addNext(FP);
}

string SideProduct::getType(){
    return type;
}