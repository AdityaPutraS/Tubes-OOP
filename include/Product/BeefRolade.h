/**
 * \class BeefRolade
 * \brief BeefRolade adalah salah satu SideProduct dalam game
 *
 * BeefRolade adalah SideProduct yang dihasilkan dari CowMeat dan BeefRolade
 *  
 * \note Ingredients : CowMeat & ChickenEgg
 * 
 * \author Naufal Aditya D.
 * 
 */
#include "SideProduct.h"

#ifndef BEEFROLADE_H
#define BEEFROLADE_H

class BeefRolade
{
public:
     /**
    * \brief Constructor BeefRolade dengan inisiasi harga BeefRolade default
    */
    BeefRolade();
    /**
     * \brief Constructor BeefRolade dengan parameter harga BeefRolade
     * \param _price Harga BeefRolade
     */
    BeefRolade(int _price);
    /**
     * \brief Copy Constructor SideProduct dengan parameter BeefRolade lain
     * \param BeefRolade& BeefRolade tujuan copy
     */
    BeefRolade(const BeefRolade&);
    /**
     * \brief Operator = untuk meng-assign BeefRolade dengan BeefRolade yang lain
     * \param _price Harga BeefRolade
     */
    BeefRolade& operator= (const BeefRolade&);
};

#endif