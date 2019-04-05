/**
 * \class Landsalmon
 * \brief Landsalmon adalah salah satu binatang dalam game
 *
 * Landsalmon adalah binatang turunan dari EggProducingAnimal dan MeatProducingAnimal
 * sehingga Landsalmon bisa menghasilkan telur maupun daging
 * 
 * \note Habitat Landsalmon adalah Barn
 *      dan bunyinya adalah "BlubBlubBlub"
 * 
 * \author Ahmad Rizal Alifio
 * 
 */
#ifndef _LANDSALMON_H
#define _LANDSALMON_H

#include <iostream>
#include "EggProducingAnimal.h"
#include "MeatProducingAnimal.h"
using namespace std;

class Landsalmon : public MeatProducingAnimal, public EggProducingAnimal {
    public:
        /**
         * \brief Konstruk Landsalmon dengan parametered location
         * 
         * Landsalmon akan memanggil konstruktor Animal
         * 
         * 
         * \param _x posisi x Landsalmon
         * \param _y posisi y Landsalmon
         */    
        Landsalmon(int _x, int _y);
        
        bool MoveRandom();

        void Die(bool diedOfHunger);
        void Interact(); 
};
#endif