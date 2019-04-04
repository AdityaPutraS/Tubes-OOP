/**
 * \class MeatProducingAnimal
 * \brief MeatProducingAnimal adalah class turunan Animal berupa kategori Animal yang menghasilkan Egg di game
 *
 * MeatProducingAnimal akan menghasilkan Meat bagi inventori player jika dilakukan interaksi Kill()
 * \author Ahmad Rizal Alifio
 * 
 */
#ifndef _MEATPRODUCINGANIMAL_H
#define _MEATPRODUCINGANIMAL_H

#include <iostream>
#include "Animal.h"
using namespace std;

class MeatProducingAnimal : public Animal {
    protected:
    
    public:
        //CTOR
        /**
         * \brief Constructor MeatProducingAnimal dengan parametered location dan animalSound
         * \param _x posisi x MeatProducingAnimal
         * \param _y posisi y MeatProducingAnimal
         * \param _animalSound suara dari MeatProducingAnimal
         */
        MeatProducingAnimal(int _x, int _y, string _animalSound, char _repChar);

        //METHOD
        /**
         * \brief DieAndGiveMeat akan men-DTOR kan MeatProducingAnimal dan memasukkan daging <Nama Animal>
         *  ke list inventori Player
         */
        virtual void DieAndGiveMeat()=0;
};
#endif