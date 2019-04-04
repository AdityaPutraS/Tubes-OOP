#include "../../include/LivingBeing/EggProducingAnimal.h"
#include <iostream>

using namespace std;

EggProducingAnimal::EggProducingAnimal(int _x, int _y, string _animalSound, char _repChar) : Animal(_x, _y, _animalSound, _repChar){
    haveEgg = false;
}

void EggProducingAnimal::SetHaveEgg(bool _haveEgg){
    haveEgg = _haveEgg;
}

bool EggProducingAnimal::IsHaveEgg(){
    return haveEgg;
}