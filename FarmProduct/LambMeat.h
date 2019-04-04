/**
 * \class LambMeat
 * \brief LambMeat adalah salah satu FarmProduct dalam game
 *
 * LambMeat adalah FarmProduct bertipe Meat yang dihasilkan oleh Lamb
 * 
 * \author Naufal Aditya D.
 * 
 */
#include "FarmProduct.h"


#ifndef LAMBMEAT_H
#define LAMBMEAT_H

class LambMeat: public FarmProduct{
    private:
    public:
    /**
    * \brief ctor LambMeat default dengan inisiasi harga price manual
    */
   LambMeat();
};

#endif