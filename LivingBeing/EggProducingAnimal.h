#ifndef _EGGPRODUCINGANIMAL_H
#define _EGGPRODUCINGANIMAL_H

/*
* CATATAN
* 
*/

#include <iostream>
#include "Animal.h"
using namespace std;

class EggProducingAnimal : public Animal {
    protected:
        bool haveEgg;
    public:
        //CTOR
        EggProducingAnimal(int _x, int _y, string _animalSound);   //init haveEgg = false
        
        //SETTER
        void SetHaveEgg(bool _haveEgg);
        bool IsHaveEgg();
};
#endif