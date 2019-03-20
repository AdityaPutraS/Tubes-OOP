#ifndef _MEATPRODUCINGANIMAL_H
#define _MEATPRODUCINGANIMAL_H

/*
* class MeatProducingAnimal
* brief class MeatProducingAnimal adalah tipe binatang dalam game
*
* MeatProducingAnimal menghasilkan meat jika dilakukan method Kill() 
* oleh player yang berada di sekitar MeatProducingAnimal
*
*author Ahmad Rizal Alifio
*/

#include <iostream>
#include "Animal.h"
using namespace std;

class MeatProducingAnimal : public Animal {
    protected:
    
    public:
        //CTOR
        /*
        * Konstruktor berparameter MeatProducingAnimal
        * \param _x adalah posisi x dari MeatProducingAnimal
        * \param _y adalah posisi y dari MeatProducingAnimal
        * \param _animalSound adalah string yang berisi suara yang dikeluarkan MeatProducingAnimal
        */
        MeatProducingAnimal(int _x, int _y, string _animalSound);

        //METHOD

        //DieAndGiveMeat() 
        /* Menghilangkan MeatProducingAnimal dari game dan memberikan meat ke player
        *  
        */
        void DieAndGiveMeat();
};
#endif