/**
 * \class LambMilk
 * \brief LambMilk adalah salah satu FarmProduct dalam game
 *
 * LambMilk adalah FarmProduct bertipe Egg yang dihasilkan oleh Chicken
 * 
 * \author Naufal Aditya D.
 * 
 */
#include "FarmProduct.h"


#ifndef LAMBMILK_H
#define LAMBMILK_H

class LambMilk: public FarmProduct{
    private:
    public:
    /**
    * \brief Constructor LambMilk dengan inisiasi harga LambMilk default
    */
    LambMilk();
    /**
     * \brief Constructor  dengan parameter harga LambMilk
     * \param _price Harga LambMilk
     */
    LambMilk(int _price);
};

#endif