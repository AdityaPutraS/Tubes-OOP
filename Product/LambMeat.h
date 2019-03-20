#include "FarmProduct.h"


#ifndef LAMBMEAT_H
#define LAMBMEAT_H

class LambMeat: public FarmProduct{
    private:
    public:
    LambMeat();
        //ctor default
    LambMeat(int _price);
        //ctor dengan parameter
    ~LambMeat();
        //dtor(kalo di sell)
};

#endif