/**
 * \class BeefRolade
 * \brief BeefRolade adalah salah satu SideProduct dalam game
 *
 * BeefRolade adalah SideProduct yang dihasilkan dari CowMeat dan ChickenEgg
 *  
 * \note Ingredients : CowMeat & ChickenEgg
 * 
 * \author Naufal Aditya D.
 * 
 */
#include <iostream>
#include "SideProduct.h"
using namespace std;

#ifndef BEEFROLADE_H
#define BEEFROLADE_H

class BeefRolade: public SideProduct{
    public:
        BeefRolade(int _price);
        BeefRolade(const BeefRolade&);
        BeefRolade& operator= (const BeefRolade&);
};


#endif