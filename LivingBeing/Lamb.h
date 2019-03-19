#ifndef _LAMB_H
#define _LAMB_H

/*
* CATATAN
* 1. animalSound = "Baaa"
* 2. Habitat    : Grassland
*/

#include <iostream>
#include "MilkProducingAnimal.h"
#include "MeatProducingAnimal.h"
using namespace std;

class Lamb : public MeatProducingAnimal, public MilkProducingAnimal {
    private:

    public:
        //CTOR    
        Lamb(int _x, int _y, string _animalSound); //Konstruk Lamb dengan parametered location, dan animalSound
};
#endif