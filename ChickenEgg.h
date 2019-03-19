#include "FarmProduct.h"


#ifndef CHICKENEGG_H
#define CHICKENEGG_H

class ChickenEgg: public FarmProduct{
    private:
    public:
    ChickenEgg();
        //ctor default
    ChickenEgg(int _price);
        //ctor dengan parameter
    ~ChickenEgg();
        //dtor(kalo di sell)
};

#endif