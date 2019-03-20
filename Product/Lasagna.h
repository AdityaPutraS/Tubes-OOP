#include <iostream>
#include "SideProduct.h"
using namespace std;

#ifndef LASAGNA_H
#define LASAGNA_H

class Lasagna: public SideProduct{
    //ingredients : LambMilk & LambMeat
    public:
        Lasagna(int _price);
        Lasagna(const Lasagna&);
        Lasagna& operator= (const Lasagna&);
        ~Lasagna();
}



#endif