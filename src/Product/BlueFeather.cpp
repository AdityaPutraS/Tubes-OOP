#include "Product/BlueFeather.h"
#include "Product/ChickenEgg.h"
#include "Product/ChickenMeat.h"
#include "Product/CowMeat.h"
#include "Product/CowMilk.h"
#include "Product/DiplodocusEgg.h"
#include "Product/DiplodocusMeat.h"
#include "Product/LambMeat.h"
#include "Product/LambMilk.h"
#include "Product/PlatypusEgg.h"
#include "Product/SalmonEgg.h"
#include "Product/SalmonMeat.h"
BlueFeather::BlueFeather():SideProduct(10000,"BlueFeather"){
    ChickenEgg CE;
    ChickenMeat CMe;
    CowMeat CM;
    CowMilk CM1;
    DiplodocusEgg DE;
    DiplodocusMeat DM;
    LambMeat LM;
    LambMilk LM1;
    PlatypusEgg PE;
    SalmonEgg SE;
    SalmonMeat SM;
    addIngredients(CE);
    addIngredients(CMe);
    addIngredients(CM);
    addIngredients(CM1);
    addIngredients(DE);
    addIngredients(DM);
    addIngredients(LM);
    addIngredients(LM1);
    addIngredients(PE);
    addIngredients(SE);
    addIngredients(SM);

}
BlueFeather::BlueFeather(int _price):SideProduct(_price, "BlueFeather"){
    ChickenEgg CE;
    ChickenMeat CMe;
    CowMeat CM;
    CowMilk CM1;
    DiplodocusEgg DE;
    DiplodocusMeat DM;
    LambMeat LM;
    LambMilk LM1;
    PlatypusEgg PE;
    SalmonEgg SE;
    SalmonMeat SM;
    addIngredients(CE);
    addIngredients(CMe);
    addIngredients(CM);
    addIngredients(CM1);
    addIngredients(DE);
    addIngredients(DM);
    addIngredients(LM);
    addIngredients(LM1);
    addIngredients(PE);
    addIngredients(SE);
    addIngredients(SM);
}
