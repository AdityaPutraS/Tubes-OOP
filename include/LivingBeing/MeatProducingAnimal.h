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

class MeatProducingAnimal : public virtual Animal
{
  public:
    //CTOR
    /**
     * \brief Constructor MeatProducingAnimal dengan parameter location dan animalSound
     * \param _x posisi x MeatProducingAnimal
     * \param _y posisi y MeatProducingAnimal
     * \param _animalSound suara dari MeatProducingAnimal
     * \param _repChar adalah karakter yang akan dipakai untuk mencetak di game utama
     * \param _maxHunger adalah berapa lama sampai hewan harus makan lagi
     */
    MeatProducingAnimal(int _x, int _y, string _animalSound, char _repChar, int maxHunger);

    virtual void Die(){};

    void Interact(){};
    /** 
     * \brief Meng-overwrite fungsi generik isMeatPA
     * sehingga jika kelas MeatProducingAnimal memanggil isMeatPA
     * akan mereturn true, tapi kalau kelas lain yang manggil
     * akan mereturn false
     */
    virtual bool isMeatPA() const { return true; }
    /**
    * \brief Prosedur agar hewan dapat bergerak secara acak
    */
    virtual bool MoveRandom();
};
#endif