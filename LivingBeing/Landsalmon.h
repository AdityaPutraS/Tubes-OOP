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

/*
* CATATAN
* 1. animalSound = "BlubBlubBlub"
* 2. Habitat    : Barn
*/

#include <iostream>
#include "EggProducingAnimal.h"
#include "MeatProducingAnimal.h"
using namespace std;

class Landsalmon : public EggProducingAnimal, public MeatProducingAnimal {
    private:

    public:
        /**
         * \brief Konstruk Chicken dengan parametered location, dan bunyi defaultnya
         * 
         * Chicken akan memanggil konstruktor Animal
         * dengan parameter bunyi "Kokokpetok"
         * 
         * \param _x posisi x Chicken
         * \param _y posisi y Chicken
         */    
        Landsalmon(int _x, int _y);
};
#endif