/**
 * \class DiplodocusEgg
 * \brief DiplodocusEgg adalah salah satu FarmProduct dalam game
 *
 * DiplodocusEgg adalah FarmProduct bertipe Egg yang dihasilkan oleh Chicken
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
    * \brief Constructor DiplodocusEgg dengan inisiasi harga DiplodocusEgg default
    */
    DiplodocusEgg();
    /**
     * \brief Constructor  dengan parameter harga DiplodocusEgg
     * \param _price Harga DiplodocusEgg
     */
    DiplodocusEgg(int _price);
};

#endif