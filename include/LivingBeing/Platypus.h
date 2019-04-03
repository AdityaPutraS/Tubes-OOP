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
    private:

    public:
        //CTOR
        //Konstruktor berparameter 
        /*
        * param _x menandakan posisi absis awal platypus
        * param _y menandakan posisi ordinat awal platypus
        * 
        */

        Platypus(int _x, int _y); 
};
#endif