/**
 * \class CowMeat
 * \brief CowMeat adalah salah satu FarmProduct dalam game
 *
 * CowMeat adalah FarmProduct bertipe Meat yang dihasilkan oleh Cow
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
    * \brief ctor CowMeat default dengan inisiasi harga price manual
    */
    CowMeat();
};

#endif