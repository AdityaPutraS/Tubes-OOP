#ifndef _MEATPRODUCINGANIMAL_H
#define _MEATPRODUCINGANIMAL_H

/*
* CATATAN
* 
*/

#include <iostream>
#include "Animal.h"
using namespace std;

class MeatProducingAnimal : public Animal {
    protected:
    
    public:
        //CTOR
        MeatProducingAnimal(int _x, int _y, string _animalSound);

        //METHOD
        void DieAndGiveMeat();
};
#endif