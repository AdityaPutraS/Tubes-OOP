/**
 * \class Animal
 * \brief Base class berbagai macam binatang di game
 * 
 * Class ini dibuat dengan tujuan mengabstraksi method general
 * yang ada untuk semua binatang seperti makan, berbunyi, mati
 * 
 * \author Ahmad Rizal Alifio
 * 
 */

#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <iostream>
#include "LivingBeing.h"
using namespace std;

class Animal : public LivingBeing {
    protected:
        int hungerMeter;        ///< Tingkat kelaparan hewan, tiap tick akan berkurang 1, default value 5
        string animalSound;     ///< Suara hewan, berbeda tiap animal
    public:
        /**
         * \brief Constructor dengan parameter posisi binatang dan suaranya
         * \param _x nilai posisi x binatang pada layar
         * \param _y nilai posisi y binatang pada layar
         * \param _animalSound string yang akan diprint ketika method SoundTheAnimal dipanggil
         */
        Animal(int _x, int _y, string _animalSound); //Konstruk binatang dengan parametered location and animal sound
        
        /// Getter hungerMeter
        int GetHungerMeter();
        /// Getter animalSound
        string GetAnimalSound();

        /// Setter hungerMeter
        void SetHungerMeter(int _hungerMeter);
        /// Setter animalSound
        void SetAnimalSound(string _animalSound);
        //void SetHidup(bool _hidup);

        
        void GettingHungry();   ///< Mengurangi HungerMeter tiap 1 tick, dipanggil tiap tick selesai
        void Eat();             ///< Hewan makan grass yang ada di petaknya
        void SoundTheAnimal();  ///< Mengeluarkan suara hewan
        void Die();             ///< If hungerMeter = 0 "Hewan laper ampe mati" else "Hewan disembelih b"
};
#endif