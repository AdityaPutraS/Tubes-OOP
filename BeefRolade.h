#include <iostream>
#include "SideProduct.h"
using namespace std;

#ifndef BEEFROLADE_H
#define BEEFROLADE_H

class BeefRolade: public SideProduct{
    //ingredients : CowMeat & ChickenEgg
    public:
        BeefRolade(int _price);
        BeefRolade(const BeefRolade&);
        BeefRolade& operator= (const BeefRolade&);
        ~BeefRolade();
}



#endif