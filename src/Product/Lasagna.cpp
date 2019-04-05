#include "Product/Lasagna.h"
#include "Product/LambMilk.h"
#include "Product/LambMeat.h"

Lasagna::Lasagna():SideProduct(1500,"Lasagna"){
    addIngredients(LambMeat());
    addIngredients(LambMilk());
}
Lasagna::Lasagna(int _price):SideProduct(_price, "Lasagna"){
    addIngredients(LambMeat());
    addIngredients(LambMilk());
}
