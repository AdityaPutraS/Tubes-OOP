/**
 * \class DiplodocusMeat
 * \brief DiplodocusMeat adalah salah satu FarmProduct dalam game
 *
 * DiplodocusMeat adalah FarmProduct bertipe Meat yang dihasilkan oleh Diplodocus
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
    * \brief ctor DiplodocusMeat default dengan inisiasi harga price manual
    */
    DiplodocusMeat();
};

#endif