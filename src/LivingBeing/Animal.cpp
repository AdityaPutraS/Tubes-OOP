#include "LivingBeing/Animal.h"
#include "World.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Animal::Animal(int _x, int _y, string _animalSound, char _repChar, int _maxHunger): LivingBeing(_x,_y,_repChar){
    animalSound = _animalSound;
    maxHunger = _maxHunger;
    hungerMeter = maxHunger;
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
bool Animal::Eat(){
    //Cek apakah di tempat dia berdiri ada rumput
    if(World::GetInstance()->getLand(x, y)->hasGrass())
    {
        setRenderChar(toupper(getRenderChar()));
        hungerMeter = maxHunger;
        return true;
    }else{
        return false;
    }
}///< Hewan makan grass yang ada di petaknya
void Animal::SoundTheAnimal(){
    World::GetInstance()->addMsg(animalSound);
}  ///< Mengeluarkan suara hewan

bool Animal::masihHidup()
{
    return isAlive;
}
