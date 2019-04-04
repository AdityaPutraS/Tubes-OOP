/**
 * \class LambMeat
 * \brief LambMeat adalah salah satu FarmProduct dalam game
 *
 * LambMeat adalah FarmProduct bertipe Egg yang dihasilkan oleh Chicken
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
    * \brief Constructor LambMeat dengan inisiasi harga LambMeat default
    */
   LambMeat();
   /**
     * \brief Constructor  dengan parameter harga LambMeat
     * \param _price Harga LambMeat
     */
    LambMeat(int _price);
};

#endif