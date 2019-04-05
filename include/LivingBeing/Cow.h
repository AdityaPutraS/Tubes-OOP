/**
 * \class Cow
 * \brief Cow adalah salah satu binatang dalam game
 *
 * Cow adalah binatang turunan dari MilkProducingAnimal dan MeatProducingAnimal
 * sehingga Cow bisa menghasilkan susu maupun daging
 * 
 * \note Habitat Cow adalah Barn
 *      dan bunyinya adalah "Mooo"
 * 
 * \author Ahmad Rizal Alifio
 * 
 */

#ifndef _COW_H
#define _COW_H

#include <iostream>
#include "MeatProducingAnimal.h"
#include "MilkProducingAnimal.h"
using namespace std;

class Cow : public MeatProducingAnimal, public MilkProducingAnimal {
    private:
        
    public:
        /**
         * \brief Konstruk Cow dengan parametered location
         * 
         * Cow akan memanggil konstruktor Animal
         * 
         * \param _x posisi x Cow
         * \param _y posisi y Cow
         */
        Cow(int _x, int _y);

        bool MoveRandom();

        void Die(bool diedOfHunger);
        void Interact(); 
};
#endif