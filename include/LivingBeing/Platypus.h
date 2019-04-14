#ifndef _PLATYPUS_H
#define _PLATYPUS_H

/**
 * \class Platypus
 * \brief Platypus adalah salah satu binatang dalam game
 *
 * Platypus adalah binatang turunan dari EggProducingAnimal
 * sehingga Platypus bisa menghasilkan telur
 * 
 * \note Habitat Platypus adalah Coop
 *      dan bunyinya adalah "Purrr"
 * 
 * \author Ahmad Rizal Alifio
 * 
 */
#include <iostream>
#include "EggProducingAnimal.h"
using namespace std;

class Platypus : public EggProducingAnimal {
    public:
        /**
         * \brief Constructor default Platypus
         * \param _x Absis objek Platypus
         * \param _y Ordinat objek Platypus
         */
        Platypus(int _x, int _y); 
        void Die(bool diedOfHunger) ;
        void Interact() ;

};
#endif