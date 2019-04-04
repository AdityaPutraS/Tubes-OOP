#include "../include/LivingBeing/Animal.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Animal::Animal(int _x, int _y, string _animalSound, char _repChar): LivingBeing(_x,_y,_repChar){
    animalSound = _animalSound;
    hungerMeter = 5;
    isAlive = true;
}
int Animal::GetHungerMeter(){
    return hungerMeter;
}
/// Getter animalSound
string Animal::GetAnimalSound(){
    return animalSound;
}

/// Setter hungerMeter
void Animal::SetHungerMeter(int _hungerMeter){
    hungerMeter = _hungerMeter;
}
/// Setter animalSound
void Animal::SetAnimalSound(string _animalSound){
    animalSound = _animalSound;
}
//void SetHidup(bool _hidup);


void Animal::GettingHungry(){
///< Mengurangi HungerMeter tiap 1 tick, dipanggil tiap tick selesai
    hungerMeter--;
}
void Animal::Eat(){

}             ///< Hewan makan grass yang ada di petaknya
void Animal::SoundTheAnimal(){
    cout<<animalSound<<endl;
}  ///< Mengeluarkan suara hewan
void Animal::Die(){
    if(hungerMeter==0){
        cout<<"Your animal died of starvation, RIP."<<endl;
    }else{
        cout<<"You managed to slaughter your animal."<<endl;
    }
    isAlive = false;
}

//hantu