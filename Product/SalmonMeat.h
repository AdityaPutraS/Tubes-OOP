/**
 * \class SalmonMeat
 * \brief SalmonMeat adalah salah satu FarmProduct dalam game
 *
 * SalmonMeat adalah FarmProduct bertipe Egg yang dihasilkan oleh Chicken
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
    /**
     * \brief Constructor  dengan parameter harga SalmonMeat
     * \param _price Harga SalmonMeat
     */
    SalmonMeat(int _price);
};

#endif