/**
 * \class EggProducingAnimal
 * \brief EggProducingAnimal adalah class turunan Animal berupa kategori Animal yang menghasilkan Egg di game
 *
 * MilkProducingAnimal menghasilkan milk jika dilakukan method InterractWith()  
 * oleh player yang berada di sekitar MilkProducingAnimal 
 *
 * \author Ahmad Rizal Alifio
 * 
 */
#ifndef _EGGPRODUCINGANIMAL_H
#define _EGGPRODUCINGANIMAL_H

#include <iostream>
#include "Animal.h"
using namespace std;

class EggProducingAnimal : public virtual Animal
{
  public:
    //CTOR
    /**
     * \brief Constructor EggProducingAnimal dengan parametered location dan animalSound
     * \param _x posisi x EggProducingAnimal
     * \param _y posisi y EggProducingAnimal
     * \param _animalSound suara dari EggProducingAnimal
     * \param _repChar adalah karakter yang akan dipakai untuk mencetak di game utama
     * \param _maxHunger adalah berapa lama sampai hewan harus makan lagi
     */
    EggProducingAnimal(int _x, int _y, string _animalSound, char _repChar, int maxHunger); //init haveEgg = false

    virtual void Die(){};

    virtual void Interact(){};
    /** 
     * \brief Meng-overwrite fungsi generik isEggPA
     * sehingga jika kelas EggProducingAnimal memanggil isEggPA
     * akan mereturn true, tapi kalau kelas lain yang manggil
     * akan mereturn false
     */
    bool isEggPA() const { return true; }
    /**
    * \brief Prosedur agar hewan dapat bergerak secara acak
    */
    bool MoveRandom();
};
#endif