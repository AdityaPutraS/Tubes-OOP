/**
 * \class CowMeat
 * \brief CowMeat adalah salah satu FarmProduct dalam game
 *
 * CowMeat adalah FarmProduct bertipe Egg yang dihasilkan oleh Chicken
 * 
 * \author Naufal Aditya D.
 * 
 */
#include "FarmProduct.h"


#ifndef COWMEAT_H
#define COWMEAT_H

class CowMeat: public FarmProduct{
    private:
    public:
    /**
    * \brief Constructor CowMeat dengan inisiasi harga CowMeat default
    */
    CowMeat();
    /**
     * \brief Constructor  dengan parameter harga CowMeat
     * \param _price Harga Cowmeat
     */
    CowMeat(int _price);
};

#endif