/**
 * \class CremeBrulee
 * \brief CremeBrulee adalah salah satu SideProduct dalam game
 *
 * CremeBrulee adalah SideProduct yang dihasilkan dari beberapa FarmProduct yang ada di Game
 *  
 * \note Ingredients : LambMilk, PlatypusEgg
 * 
 * \author Naufal Aditya D.
 * 
 */
#include <iostream>
#include "SideProduct.h"
using namespace std;

#ifndef CREMEBRULEE_H
#define CREMEBRULEE_H

class CremeBrulee: public SideProduct{
    //ingredients : LambMilk & PlatypusEgg
    public:
        /**
        * \brief Constructor CremeBrulee dengan inisiasi harga CremeBrulee default
        */
        CremeBrulee();
        /**
         * \brief Constructor CremeBrulee dengan parameter harga CremeBrulee
         * \param _price Harga CremeBrulee
         */
        CremeBrulee(int _price);
         /**
         * \brief Copy Constructor SideProduct dengan parameter CremeBrulee lain
         * \param CremeBrulee& CremeBrulee tujuan copy
         */
        CremeBrulee(const CremeBrulee&);
        /**
         * \brief Operator = untuk meng-assign CremeBrulee dengan CremeBrulee yang lain
         * \param _price Harga CremeBrulee
         */
        CremeBrulee& operator= (const CremeBrulee&);
};



#endif