/**
 * \class CheeseSteakOmelette
 * \brief CheeseSteakOmelette adalah salah satu SideProduct dalam game
 *
 * CheeseSteakOmelette adalah SideProduct yang dihasilkan dari DiplodocusEgg, DiplodocusMeat, dan CowMilk
 *  
 * \note Ingredients : DiplodocusEgg, DiplodocusMeat, dan CowMilk
 * 
 * \author Naufal Aditya D.
 * 
 */
#include <iostream>
#include "SideProduct.h"
using namespace std;

#ifndef CHEESESTEAKOMELETTE_H
#define CheesesteakOmelette_H

class CheesesteakOmelette: public SideProduct{
    //ingredients : DiplodocusEgg & DiplodocusMeat & CowMilk
    public:
        /**
        * \brief Constructor CheeseSteakOmelette dengan inisiasi harga CheeseSteakOmelette default
        */
        CheeseSteakOmelette();
        /**
         * \brief Constructor CheeseSteakOmelette dengan parameter harga CheeseSteakOmelette
         * \param _price Harga CheeseSteakOmelette
         */
        CheesesteakOmelette(int _price);
        /**
         * \brief Copy Constructor SideProduct dengan parameter CheeseSteakOmelette lain
         * \param CheeseSteakOmelette& CheeseSteakOmelette tujuan copy
         */
        CheesesteakOmelette(const CheesesteakOmelette&);
        /**
         * \brief Operator = untuk meng-assign CheeseSteakOmelette dengan CheeseSteakOmelette yang lain
         * \param _price Harga CheeseSteakOmelette
         */
        CheesesteakOmelette& operator= (const CheesesteakOmelette&);
};



#endif