#include "Cell/Mixer.h"

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
    
}

bool Mixer::isMixer() const{
    return true;
}

void Mixer::interact() 
{
    
}