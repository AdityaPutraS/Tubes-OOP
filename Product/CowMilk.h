/**
 * \class CowMilk
 * \brief CowMilk adalah salah satu FarmProduct dalam game
 *
 * CowMilk adalah FarmProduct bertipe Egg yang dihasilkan oleh Chicken
 * 
 * \author Naufal Aditya D.
 * 
 */
#include "FarmProduct.h"


#ifndef CHICKENMEAT_H
#define CHICKENMEAT_H

class CowMilk: public FarmProduct{
    private:
    public:
    /**
    * \brief Constructor CowMilk dengan inisiasi harga CowMilk default
    */
    CowMilk();
    /**
     * \brief Constructor  dengan parameter harga CowMilk
     * \param _price Harga CowMilk
     */
    CowMilk(int _price);
};

#endif