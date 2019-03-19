#ifndef _PLATYPUS_H
#define _PLATYPUS_H

/*
* CATATAN
* 1. animalSound = "Purrr"
*/

#include <iostream>
#include "EggProducingAnimal.h"
using namespace std;

class Platypus : public EggProducingAnimal {
    private:

    public:
        //CTOR    
        Platypus(int _x, int _y, string _animalSound); //Konstruk platypus dengan parametered location, hungerMeter, dan animalSound
};
#endif