#include "FarmProduct.h"


#ifndef LAMBMILK_H
#define LAMBMILK_H

class LambMilk: public FarmProduct{
    private:
    public:
    LambMilk();
        //ctor default
    LambMilk(int _price);
        //ctor dengan parameter
    ~LambMilk();
        //dtor(kalo di sell)
};

#endif