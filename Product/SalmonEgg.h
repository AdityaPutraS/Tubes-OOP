#include "FarmProduct.h"


#ifndef SALMONEGG_H
#define SALMONEGG_H

class SalmonEgg: public FarmProduct{
    private:
    public:
    SalmonEgg();
        //ctor default
    SalmonEgg(int _price);
        //ctor dengan parameter
    ~SalmonEgg();
        //dtor(kalo di sell)
};

#endif