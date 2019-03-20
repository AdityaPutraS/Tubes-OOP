/**
 * \class DiplodocusMeat
 * \brief DiplodocusMeat adalah salah satu FarmProduct dalam game
 *
 * DiplodocusMeat adalah FarmProduct bertipe Egg yang dihasilkan oleh Chicken
 * 
 * \author Naufal Aditya D.
 * 
 */
#include "FarmProduct.h"


#ifndef DIPLODOCUSMEAT_H
#define DIPLODOCUSMEAT_H

class DiplodocusMeat: public FarmProduct{
    private:
    public:
    /**
    * \brief Constructor DiplodocusMeat dengan inisiasi harga DiplodocusMeat default
    */
    DiplodocusMeat();
    /**
     * \brief Constructor  dengan parameter harga DiplodocusMeat
     * \param _price Harga DiplodocusMeat
     */
    DiplodocusMeat(int _price);
};

#endif