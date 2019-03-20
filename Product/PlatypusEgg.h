#include "FarmProduct.h"


#ifndef PLATYPUSEGG_H
#define PLATYPUSEGG_H

class PlatypusEgg: public FarmProduct{
    private:
    public:
    PlatypusEgg();
        //ctor default
    PlatypusEgg(int _price);
        //ctor dengan parameter
    ~PlatypusEgg();
        //dtor(kalo di sell)
};

#endif