/**
 * \class SalmonMeat
 * \brief SalmonMeat adalah salah satu FarmProduct dalam game
 *
 * SalmonMeat adalah FarmProduct bertipe Meat yang dihasilkan oleh Salmon
 * 
 * \author Naufal Aditya D.
 * 
 */
#include "FarmProduct.h"


#ifndef SALMONMEAT_H
#define SALMONMEAT_H

class SalmonMeat: public FarmProduct{
    private:
    public:
    /**
    * \brief Constructor SalmonMeat dengan inisiasi harga SalmonMeat default
    */
    SalmonMeat();
};

#endif