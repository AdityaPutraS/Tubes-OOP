/**
 * \class SalmonEgg
 * \brief SalmonEgg adalah salah satu FarmProduct dalam game
 *
 * SalmonEgg adalah FarmProduct bertipe Egg yang dihasilkan oleh Chicken
 * 
 * \author Naufal Aditya D.
 * 
 */
#include "FarmProduct.h"


#ifndef SALMONEGG_H
#define SALMONEGG_H

class SalmonEgg: public FarmProduct{
    private:
    public:
    /**
    * \brief Constructor SalmonEgg dengan inisiasi harga SalmonEgg default
    */
    SalmonEgg();
    /**
     * \brief Constructor  dengan parameter harga SalmonEgg
     * \param _price Harga SalmonEgg
     */
    SalmonEgg(int _price);
};

#endif