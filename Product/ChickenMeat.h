#include "FarmProduct.h"


#ifndef CHICKENMEAT_H
#define CHICKENMEAT_H

class ChickenMeat: public FarmProduct{
    private:
    public:
    ChickenMeat();
        //ctor default
    ChickenMeat(int _price);
        //ctor dengan parameter
    ~ChickenMeat();
        //dtor(kalo di sell)
};

#endif