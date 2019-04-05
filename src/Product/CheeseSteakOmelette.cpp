#include "Product/CheeseSteakOmelette.h"
#include "Product/DiplodocusEgg.h"
#include "Product/DiplodocusMeat.h"
#include "Product/CowMilk.h"

CheeseSteakOmelette::CheeseSteakOmelette():SideProduct(1050,"CheeseSteakOmelette"){
    DiplodocusEgg DE;
    DiplodocusMeat DM;
    CowMilk CM;
    addIngredients(CM);
    addIngredients(DE);
    addIngredients(DM);
}
CheeseSteakOmelette::CheeseSteakOmelette(int _price):SideProduct(_price, "CheeseSteakOmelette"){
    DiplodocusEgg DE;
    DiplodocusMeat DM;
    CowMilk CM;
    addIngredients(CM);
    addIngredients(DE);
    addIngredients(DM);
}