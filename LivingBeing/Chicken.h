#ifndef _CHICKEN_H
#define _CHICKEN_H

/*
* CATATAN
* 1. animalSound = "Kokokpetok"
* 2. Habitat    : Coop
*/

#include <iostream>
#include "EggProducingAnimal.h"
#include "MeatProducingAnimal.h"
using namespace std;

class Chicken : public EggProducingAnimal, public MeatProducingAnimal {
    private:

    public:
        //CTOR
        Chicken(int _x, int _y, string _animalSound); //Konstruk Chicken dengan parametered location, dan animalSound
};
#endif