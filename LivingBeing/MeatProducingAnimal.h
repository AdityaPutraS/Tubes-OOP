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
        int meatAmount;
    public:
        //CTOR
        MeatProducingAnimal(int _x, int _y, string _animalSound, int _meatAmount);  //init meatAmount tergantung animalnya

        //METHOD
        void DieAndGiveMeat();
};
#endif