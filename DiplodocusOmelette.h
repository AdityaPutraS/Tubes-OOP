#include <iostream>
#include "SideProduct.h"
using namespace std;

#ifndef DIPLODOCUSOMELETTE_H
#define DIPLODOCUSOMELETTE_H

class DiplodocusOmelette: public SideProduct{
    public:
        DiplodocusOmelette(int _price);
        DiplodocusOmelette(const DiplodocusOmelette&);
        DiplodocusOmelette& operator= (const DiplodocusOmelette&);
        ~DiplodocusOmelette();
}



#endif