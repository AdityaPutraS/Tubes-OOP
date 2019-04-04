/**
 * \class ChickenEgg
 * \brief ChickenEgg adalah salah satu FarmProduct dalam game
 *
 * ChickenEgg adalah FarmProduct bertipe Egg yang dihasilkan oleh Chicken
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
    /**
     * \brief Constructor  dengan parameter harga ChickenEgg
     * \param _price Harga ChickenEgg
     */
    ChickenEgg(int _price);
};

#endif