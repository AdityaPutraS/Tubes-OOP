#include "../../include/LivingBeing/MilkProducingAnimal.h"

MilkProducingAnimal::MilkProducingAnimal(int _x, int _y, string _animalSound, char _repChar) : Animal(_x, _y, _animalSound, _repChar){
    haveMilk = false;
}

void MilkProducingAnimal::ProduceMilk(){
    //Belum ada implementasinya
}

bool MilkProducingAnimal::IsHaveMilk(){
    return haveMilk;
}