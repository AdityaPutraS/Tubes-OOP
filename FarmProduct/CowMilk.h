/**
 * \class CowMilk
 * \brief CowMilk adalah salah satu FarmProduct dalam game
 *
 * CowMilk adalah FarmProduct bertipe Milk yang dihasilkan oleh Cow
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
    * \brief ctor CowMilk default dengan inisiasi harga price manual
    */
    CowMilk();
};

#endif