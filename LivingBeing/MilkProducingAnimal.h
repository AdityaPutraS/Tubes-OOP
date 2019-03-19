#ifndef _MILKPRODUCINGANIMAL_H
#define _MILKPRODUCINGANIMAL_H

/*
* CATATAN
* 
*/

#include <iostream>
#include "Animal.h"
using namespace std;

class MilkProducingAnimal : public Animal {
    protected:
        bool haveMilk;
    public:
        //CTOR
        MilkProducingAnimal(int _x, int _y, string _animalSound); //init haveMilk = false
        
        //METHOD
        void ProduceMilk();
        bool IsHaveEgg();
};
#endif