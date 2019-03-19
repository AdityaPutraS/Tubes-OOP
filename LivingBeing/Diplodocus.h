#ifndef _DIPLODOCUS_H
#define _DIPLODOCUS_H

/*
* CATATAN
* 1. animalSound = "Rawr XD"
* 2. Habitat    : Grassland
*/

#include <iostream>
#include "EggProducingAnimal.h"
#include "MeatProducingAnimal.h"
using namespace std;

class Diplodocus : public EggProducingAnimal, public MeatProducingAnimal {
    private:

    public:
        //CTOR    
        Diplodocus(int _x, int _y, string _animalSound); //Konstruk Diplodocus dengan parametered location, dan animalSound
};
#endif