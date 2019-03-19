#ifndef _PLATYPUS_H
#define _PLATYPUS_H

/*
* CATATAN
* 1. animalSound = "Purrr"
* 2. Habitat    : Coop
*/

#include <iostream>
#include "EggProducingAnimal.h"
using namespace std;

class Platypus : public EggProducingAnimal {
    private:

    public:
        //CTOR    
        Platypus(int _x, int _y, string _animalSound); //Konstruk Platypus dengan parametered location dan animalSound
};
#endif