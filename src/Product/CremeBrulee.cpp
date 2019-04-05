#include "Product/CremeBrulee.h"
#include "Product/LambMilk.h"
#include "Product/PlatypusEgg.h"

CremeBrulee::CremeBrulee():SideProduct(1200,"CremeBrulee"){
    addIngredients(LambMilk());
    addIngredients(PlatypusEgg());
}
CremeBrulee::CremeBrulee(int _price):SideProduct(_price, "CremeBrulee"){
    addIngredients(LambMilk());
    addIngredients(PlatypusEgg());
}
