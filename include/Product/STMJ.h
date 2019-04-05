/**
 * \class STMJ
 * \brief STMJ adalah salah satu SideProduct dalam game
 *
 * STMJ adalah SideProduct yang dihasilkan dari beberapa FarmProduct yang ada di Game
 *  
 * \note Ingredients : ChickenEgg & CowMilk
 * 
 * \author Naufal Aditya D.
 * 
 */
#include <iostream>
#include "SideProduct.h"
using namespace std;

#ifndef STMJ_H
#define STMJ_H

class STMJ: public SideProduct{
    //ingredients : ChickenEgg & CowMilk
    public:
        /**
        * \brief Constructor STMJ dengan inisiasi harga STMJ default
        */
        STMJ();
        /**
         * \brief Constructor STMJ dengan parameter harga STMJ
         * \param _price Harga STMJ
         */
        STMJ(int _price);
        /**
         * \brief Copy Constructor SideProduct dengan parameter STMJ lain
         * \param STMJ& STMJ tujuan copy
         */
        STMJ(const STMJ&);
        /**
         * \brief Operator = untuk meng-assign STMJ dengan STMJ yang lain
         * \param _price Harga STMJ
         */
        STMJ& operator= (const STMJ&);
};



#endif