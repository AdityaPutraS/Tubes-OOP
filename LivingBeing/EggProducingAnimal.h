#ifndef _EGGPRODUCINGANIMAL_H
#define _EGGPRODUCINGANIMAL_H

/*
* class EggProducingAnimal
* brief class EggProducingAnimal adalah tipe binatang dalam game
*
* EggProducingAnimal menghasilkan egg jika dilakukan method InterractWith() 
* oleh player yang berada di sekitar EggProducingAnimal
*
*author Ahmad Rizal Alifio
*/

#include <iostream>
#include "Animal.h"
using namespace std;

class EggProducingAnimal : public Animal {
    protected:
        bool haveEgg;
    public:
        //CTOR
        /*
        * brief Konstruktor berparameter EggProducingAnimal
        * \param _x adalah posisi x dari EggProducingAnimal
        * \param _y adalah posisi y dari EggProducingAnimal
        * \param _animalSound adalah string yang berisi suara yang dikeluarkan EggProducingAnimal
        */
        EggProducingAnimal(int _x, int _y, string _animalSound);   //init haveEgg = false
        
        //SETTER
        //METHOD
        // brief Menghasilkan egg ke player jika
        // ada disekitar player yang melakukan Interaksi
        void SetHaveEgg(bool _haveEgg);

        // brief Mereturn atribut haveEgg, mereturn True jika siap memproduksi egg, False jika tidak
        bool IsHaveEgg();

};
#endif