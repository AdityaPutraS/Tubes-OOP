#include "FarmProduct.h"


#ifndef DIPLODOCUSEGG_H
#define DIPLODOCUSEGG_H

class DiplodocusEgg: public FarmProduct{
    private:
    public:
    DiplodocusEgg();
        //ctor default
    DiplodocusEgg(int _price);
        //ctor dengan parameter
    ~DiplodocusEgg();
        //dtor(kalo di sell)
};

#endif