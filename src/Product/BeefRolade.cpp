#include "Product/BeefRolade.h"
#include "Product/SideProduct.h"
#include "Product/ChickenEgg.h"
#include "Product/CowMeat.h"
BeefRolade::BeefRolade():SideProduct(1000,"BeefRolade"){
    ChickenEgg CE;
    CowMeat CM;
    addIngredients(CE);
    addIngredients(CM);
}
BeefRolade::BeefRolade(int _price):SideProduct(_price, "BeefRolade"){
    ChickenEgg CE;
    CowMeat CM;
    addIngredients(CE);
    addIngredients(CM);
}