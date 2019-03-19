#include "FarmProduct.h"


#ifndef COWMEAT_H
#define COWMEAT_H

class CowMeat: public FarmProduct{
    private:
    public:
    CowMeat();
        //ctor default
    CowMeat(int _price);
        //ctor dengan parameter
    ~CowMeat();
        //dtor(kalo di sell)
};

#endif