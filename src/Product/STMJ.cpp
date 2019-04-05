#include "Product/STMJ.h"
#include "Product/ChickenEgg.h"
#include "Product/CowMilk.h"

STMJ::STMJ():SideProduct(800,"STMJ"){
    addIngredients(ChickenEgg());
    addIngredients(CowMilk());
}
STMJ::STMJ(int _price):SideProduct(_price, "STMJ"){
    addIngredients(ChickenEgg());
    addIngredients(CowMilk());
}
