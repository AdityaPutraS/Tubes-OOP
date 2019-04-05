#include "Cell/Mixer.h"
#include "Product/AllProduct.h"

vector<SideProduct> Mixer::catalog = vector<SideProduct>();

Mixer::Mixer(Point pos) : Facility(pos, 'M')
{}

SideProduct Mixer::mix(Product P1, Product P2)
{
    for(SideProduct sp : catalog)
    {
        vector<FarmProduct> temp = sp.getIngredients();
        if(temp[0] == P1 && temp[1] == P2)
        {
            return sp;
        }else if(temp[1] == P2 && temp[1] == P1)
        {
            return sp;
        }
    }
    return catalog.at(0);
}

void Mixer::initCatalog()
{
    // catalog.push_back(BeefRolade());
    // catalog.push_back(BlueFeather());
    // catalog.push_back(CheeseSteakOmelette());
    // catalog.push_back(CremeBrulee());
    // catalog.push_back(Lasagna());
    // catalog.push_back(STMJ());
}

bool Mixer::isMixer() const{
    return true;
}

void Mixer::interact() 
{
    
}