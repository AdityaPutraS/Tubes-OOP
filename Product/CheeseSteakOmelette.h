#include <iostream>
#include "SideProduct.h"
using namespace std;

#ifndef CHEESESTEAKOMELETTE_H
#define CheesesteakOmelette_H

class CheesesteakOmelette: public SideProduct{
    //ingredients : DiplodocusEgg & DiplodocusMeat & CowMilk
    public:
        CheesesteakOmelette(int _price);
        CheesesteakOmelette(const CheesesteakOmelette&);
        CheesesteakOmelette& operator= (const CheesesteakOmelette&);
        ~CheesesteakOmelette();
}



#endif