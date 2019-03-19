#ifndef _COW_H
#define _COW_H

/*
* CATATAN
* 1. animalSound = "Mooo"
* 2. Habitat    : Barn
*/

#include <iostream>
#include "MeatProducingAnimal.h"
#include "MilkProducingAnimal.h"
using namespace std;

class Cow : public MeatProducingAnimal, public MilkProducingAnimal {
    private:
        
    public:
        //CTOR
        Cow(int _x, int _y, string _animalSound); //Konstruk Cow dengan parametered location dan animalSound
};
#endif