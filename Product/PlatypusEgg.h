/**
 * \class PlatypusEgg
 * \brief PlatypusEgg adalah salah satu FarmProduct dalam game
 *
 * PlatypusEgg adalah FarmProduct bertipe Egg yang dihasilkan oleh Chicken
 * 
 * \author Naufal Aditya D.
 * 
 */
#include "FarmProduct.h"


#ifndef PLATYPUSEGG_H
#define PLATYPUSEGG_H

class PlatypusEgg: public FarmProduct{
    private:
    public:
    /**
    * \brief Constructor PlatypusEgg dengan inisiasi harga PlatypusEgg default
    */
    PlatypusEgg();
    /**
     * \brief Constructor  dengan parameter harga PlatypusEgg
     * \param _price Harga PlatypusEgg
     */
    PlatypusEgg(int _price);
        
};

#endif