#ifndef _CHICKEN_H
#define _CHICKEN_H

/*
* CATATAN
* 1. animalSound = "Purrr"
*/

#include <iostream>
#include "EggProducingAnimal.h"
#include "MeatProducingAnimal.h"
using namespace std;

class Chicken : public EggProducingAnimal, public MeatProducingAnimal {
    private:

    public:
        //CTOR
        Chicken(int _x, int _y, string _animalSound); //Konstruk platypus dengan parametered location, hungerMeter, dan animalSound
};
#endif