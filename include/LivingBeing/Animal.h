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
        int maxHunger;          ///< Maksimum tingkat kelaparan hewan
        int hungerMeter;        ///< Tingkat kelaparan hewan, tiap tick akan berkurang 1, default value maxHunger
        string animalSound;     ///< Suara hewan, berbeda tiap animal
        bool isAlive;
    public:
        /**
         * \brief Constructor dengan parameter posisi binatang dan suaranya
         * \param _x nilai posisi x binatang pada layar
         * \param _y nilai posisi y binatang pada layar
         * \param _animalSound string yang akan diprint ketika method SoundTheAnimal dipanggil
         */
        Animal(int _x, int _y, string _animalSound, char _repChar, int _maxHunger); //Konstruk binatang dengan parametered location and animal sound
        
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
        bool Eat();             ///< Hewan makan grass yang ada di petaknya
        void SoundTheAnimal();  ///< Mengeluarkan suara hewan
        virtual void Die(bool diedOfHunger)=0;   ///< If hungerMeter = 0 "Hewan laper ampe mati" else "Hewan disembelih b"
        virtual void Interact()=0; ///< Method interaksi player dengan hewan  
        virtual bool isMeatPA() const{ return false;}
        virtual bool isMilkPA() const{ return false;}
        virtual bool isEggPA() const{ return false;}
        bool masihHidup();
        /**
         * \brief Bergerak acak ke salah satu dari 4 arah yang ada sebanyak 1 petak,
         *      digunakan untuk animal
         */
        virtual bool MoveRandom()=0;
};
#endif