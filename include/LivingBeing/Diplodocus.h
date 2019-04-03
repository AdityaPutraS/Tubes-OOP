/**
 * \class Diplodocus
 * \brief Diplodocus adalah salah satu binatang dalam game
 *
 * Diplodocus adalah binatang turunan dari EggProducingAnimal dan MeatProducingAnimal
 * sehingga Diplodocus bisa menghasilkan telur maupun daging
 * 
 * \note Habitat Diplodocus adalah Grassland
 *      dan bunyinya adalah "Rawr XD"
 * 
 * \author Ahmad Rizal Alifio
 * 
 */

#ifndef _DIPLODOCUS_H
#define _DIPLODOCUS_H

#include <iostream>
#include "EggProducingAnimal.h"
#include "MeatProducingAnimal.h"
using namespace std;

class Diplodocus : public EggProducingAnimal, public MeatProducingAnimal {
    private:

    public:
        /**
         * \brief Konstruk Diplodocus dengan parametered location, dan bunyi defaultnya
         * 
         * Diplodocus akan memanggil konstruktor Animal
         * dengan parameter bunyi "Rawr XD"
         * 
         * \param _x posisi x Diplodocus
         * \param _y posisi y Diplodocus
         */   
        Diplodocus(int _x, int _y);
};
#endif