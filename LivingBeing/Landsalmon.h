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
        //CTOR    
        Landsalmon(int _x, int _y, string _animalSound); //Konstruk Landsalmon dengan parametered location dan animalSound
};
#endif