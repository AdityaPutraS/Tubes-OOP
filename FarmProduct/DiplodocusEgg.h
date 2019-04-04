/**
 * \class DiplodocusEgg
 * \brief DiplodocusEgg adalah salah satu FarmProduct dalam game
 *
 * DiplodocusEgg adalah FarmProduct bertipe Egg yang dihasilkan oleh Diplodocus
 * 
 * \author Naufal Aditya D.
 * 
 */
#include "FarmProduct.h"


#ifndef DIPLODOCUSEGG_H
#define DIPLODOCUSEGG_H

class DiplodocusEgg: public FarmProduct{
    private:
    public:
    /**
    * \brief ctor DiplodocusEgg default dengan inisiasi harga price manual
    */
    DiplodocusEgg();
};

#endif