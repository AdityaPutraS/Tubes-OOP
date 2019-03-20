#include "FarmProduct.h"


#ifndef CHICKENMEAT_H
#define CHICKENMEAT_H

class CowMilk: public FarmProduct{
    private:
    public:
    CowMilk();
        //ctor default
    CowMilk(int _price);
        //ctor dengan parameter
    ~CowMilk();
        //dtor(kalo di sell)
};

#endif