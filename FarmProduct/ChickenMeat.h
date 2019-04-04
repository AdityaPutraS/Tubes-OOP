/**
 * \class ChickenMeat
 * \brief ChickenMeat adalah salah satu FarmProduct dalam game
 *
 * ChickenMeat adalah FarmProduct bertipe Meat yang dihasilkan oleh Chicken
 * 
 * \author Naufal Aditya D.
 * 
 */
#include "FarmProduct.h"


#ifndef CHICKENMEAT_H
#define CHICKENMEAT_H

class ChickenMeat: public FarmProduct{
    private:
    public:
    /**
    * \brief ctor ChickenMeat default dengan inisiasi harga price manual
    */
    ChickenMeat();
};

#endif