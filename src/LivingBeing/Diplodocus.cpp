#include "../../include/LivingBeing/Diplodocus.h"
#include "LivingBeing/Player.h"
#include "Product/DiplodocusMeat.h"
#include <iostream>

using namespace std;

Diplodocus::Diplodocus(int _x, int _y): EggProducingAnimal(_x,_y,"Rawr XD", 'D'), MeatProducingAnimal(_x,_y,"Rawr XD", 'D'){

}
    
void Diplodocus::GiveMeat(){
    Player::GetInstance()->AddInventory(new DiplodocusMeat());
}