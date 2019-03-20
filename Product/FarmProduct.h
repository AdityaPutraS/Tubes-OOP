#include <iostream>
#include "Product.h"
using namespace std;

#ifndef FARMPRODUCT_H
#define FARMPRODUCT_H

class FarmProduct: public Product{
    public:
    FarmProduct();
        //ctor default
    FarmProduct(int _price);
        //ctor dengan parameter
    ~FarmProduct();
        //dtor(kalo di sell)
};



#endif