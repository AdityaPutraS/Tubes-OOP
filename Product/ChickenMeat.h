/**
 * \class ChickenMeat
 * \brief ChickenMeat adalah salah satu FarmProduct dalam game
 *
 * ChickenMeat adalah FarmProduct bertipe Egg yang dihasilkan oleh Chicken
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
    * \brief Constructor ChickenMeat dengan inisiasi harga ChickenMeat default
    */
    ChickenMeat();
    /**
     * \brief Constructor  dengan parameter harga ChickenMeat
     * \param _price Harga ChickenMeat
     */
    ChickenMeat(int _price);
};

#endif