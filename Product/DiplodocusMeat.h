#include "FarmProduct.h"


#ifndef DIPLODOCUSMEAT_H
#define DIPLODOCUSMEAT_H

class DiplodocusMeat: public FarmProduct{
    private:
    public:
    DiplodocusMeat();
        //ctor default
    DiplodocusMeat(int _price);
        //ctor dengan parameter
    ~DiplodocusMeat();
        //dtor(kalo di sell)
};

#endif