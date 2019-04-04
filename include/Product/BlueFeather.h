/**
 * \class BlueFeather
 * \brief BlueFeather adalah salah satu SideProduct dalam game
 *
 * BlueFeather adalah SideProduct yang dihasilkan dari semua FarmProduct yang ada di Game
 *  
 * \note Ingredients : ChickenEgg, ChickenMeat, CowMeat,CowMilk, DiplodocusEgg, DiplodocusMeat, LambMeat, LambMilk,
 *  PlatypusEgg, SalmonEgg, SalmonMeat
 * 
 * \author Naufal Aditya D.
 * 
 */
#include <iostream>
#include "SideProduct.h"
using namespace std;

#ifndef BLUEFEATHER_H
#define BLUEFEATHER_H

class BlueFeather: public SideProduct{
    //ingredients : semua
    public:
        /**
        * \brief Constructor BlueFeather dengan inisiasi harga BlueFeather default
        */
        BlueFeather();
        /**
         * \brief Constructor BlueFeather dengan parameter harga BlueFeather
         * \param _price Harga BlueFeather
         */
        BlueFeather(int _price);
        /**
         * \brief Copy Constructor SideProduct dengan parameter BlueFeather lain
         * \param BlueFeather& BlueFeather tujuan copy
         */
        BlueFeather(const BlueFeather&);
        /**
         * \brief Operator = untuk meng-assign BlueFeather dengan BlueFeather yang lain
         * \param _price Harga BlueFeather
         */
        BlueFeather& operator= (const BlueFeather&);
};



#endif