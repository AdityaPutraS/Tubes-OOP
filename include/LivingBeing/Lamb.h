/**
 * \class Lamb
 * \brief Lamb adalah salah satu binatang dalam game
 *
 * Lamb adalah binatang turunan dari MilkProducingAnimal dan MeatProducingAnimal
 * sehingga Lamb bisa menghasilkan susu maupun daging
 * 
 * \note Habitat Lamb adalah Grassland
 *      dan bunyinya adalah "Baaa"
 * 
 * \author Ahmad Rizal Alifio
 * 
 */
#ifndef _LAMB_H
#define _LAMB_H

#include <iostream>
#include "MilkProducingAnimal.h"
#include "MeatProducingAnimal.h"
using namespace std;

class Lamb : public MeatProducingAnimal, public MilkProducingAnimal {
    private:

    public:
        /**
         * \brief Konstruk Lamb dengan parametered location, dan bunyi defaultnya
         * 
         * Lamb akan memanggil konstruktor Animal
         * dengan parameter bunyi "Baaa"
         * 
         * \param _x posisi x Lamb
         * \param _y posisi y Lamb
         */  
        Lamb(int _x, int _y);
        /**
        * \brief Prosedur agar Lamb dapat bergerak secara acak
        */
        bool MoveRandom();

        void Die(bool diedOfHunger);
        void Interact(); 
};
#endif