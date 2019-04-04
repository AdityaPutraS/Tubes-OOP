/**
 * \class Chicken
 * \brief Chicken adalah salah satu binatang dalam game
 *
 * Chicken adalah binatang turunan dari EggProducingAnimal dan MeatProducingAnimal
 * sehingga Chicken bisa menghasilkan telur maupun daging
 * 
 * \note Habitat Chicken adalah Coop
 *      dan bunyinya adalah "Kokokpetok"
 * 
 * \author Ahmad Rizal Alifio
 * 
 */

#ifndef _CHICKEN_H
#define _CHICKEN_H

#include <iostream>
#include "EggProducingAnimal.h"
#include "MeatProducingAnimal.h"
using namespace std;

class Chicken : public EggProducingAnimal, public MeatProducingAnimal {
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
        Chicken(int _x, int _y); 

        void GiveMeat();
};

#endif