#include <iostream>
#include "SideProduct.h"
using namespace std;

#ifndef CREMEBRULEE_H
#define CREMEBRULEE_H

class CremeBrulee: public SideProduct{
    //ingredients : LambMilk & PlatypusEgg
    public:
        CremeBrulee(int _price);
        CremeBrulee(const CremeBrulee&);
        CremeBrulee& operator= (const CremeBrulee&);
        ~CremeBrulee();
}



#endif