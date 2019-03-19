#include "FarmProduct.h"


#ifndef SALMONMEAT_H
#define SALMONMEAT_H

class SalmonMeat: public FarmProduct{
    private:
    public:
    SalmonMeat();
        //ctor default
    SalmonMeat(int _price);
        //ctor dengan parameter
    ~SalmonMeat();
        //dtor(kalo di sell)
};

#endif