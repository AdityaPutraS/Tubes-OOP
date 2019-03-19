#ifndef _ANIMAL_H
#define _ANIMAL_H

/*
* CATATAN
*
*/

#include <iostream>
#include "LivingBeing.h"
using namespace std;

class Animal : public LivingBeing {
    protected:
        int hungerMeter;        //Tiap tick akan berkurang 1, batas lapar 5
        string animalSound;     //Suara hewan, berbeda tiap animal
    public:
        //CTOR
        Animal(int _x, int _y, string _animalSound); //Konstruk binatang dengan parametered location and animal sound
        
        //GETTER
        int GetHungerMeter();
        string GetAnimalSound();

        //SETTER
        void SetHungerMeter(int _hungerMeter);
        void SetAnimalSound(string _animalSound);
        void SetHidup(bool _hidup);

        //METHOD
        void GettingHungry();   //Mengurangi HungerMeter tiap 1 tick, dipanggil tiap tick selesai
        void Eat();             //Hewan makan grass yang ada di petaknya
        void SoundTheAnimal();  //Mengeluarkan suara hewan
        void Die();             //If hungerMeter = 0 "Hewan laper ampe mati" else "Hewan disembelih b"
};
#endif