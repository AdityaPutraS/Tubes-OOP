/**
 * \class BeefRolade
 * \brief BeefRolade adalah salah satu FarmProduct dalam game
 *
 * BeefRolade adalah FarmProduct bertipe Egg yang dihasilkan oleh Chicken
 * 
 * \author Naufal Aditya D.
 * 
 */
#include "FarmProduct.h"

#ifndef CHICKENEGG_H
#define CHICKENEGG_H

class ChickenEgg: public FarmProduct{
    private:
    public:
    /**
    * \brief Constructor ChickenEgg dengan inisiasi harga ChickenEgg default
    */
    ChickenEgg();
};
#endif