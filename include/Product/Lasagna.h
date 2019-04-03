/**
 * \class Lasagna
 * \brief Lasagna adalah salah satu SideProduct dalam game
 *
 * Lasagna adalah SideProduct yang dihasilkan dari beberapa FarmProduct yang ada di Game
 *  
 * \note Ingredients : LambMilk & LambMeat
 * 
 * \author Naufal Aditya D.
 * 
 */
#include <iostream>
#include "SideProduct.h"
using namespace std;

#ifndef LASAGNA_H
#define LASAGNA_H

class Lasagna: public SideProduct{
    //ingredients : LambMilk & LambMeat
    public:
         /**
        * \brief Constructor Lasagna dengan inisiasi harga Lasagna default
        */
        Lasagna();
        /**
         * \brief Constructor Lasagna dengan parameter harga Lasagna
         * \param _price Harga Lasagna
         */
        Lasagna(int _price);
        /**
         * \brief Copy Constructor SideProduct dengan parameter Lasagna lain
         * \param Lasagna& Lasagna tujuan copy
         */
        Lasagna(const Lasagna&);
        /**
         * \brief Operator = untuk meng-assign Lasagna dengan Lasagna yang lain
         * \param _price Harga Lasagna
         */
        Lasagna& operator= (const Lasagna&);
};



#endif