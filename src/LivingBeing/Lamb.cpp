#include "../../include/LivingBeing/Lamb.h"
#include "LivingBeing/Player.h"
#include "Product/LambMeat.h"
#include <iostream>

using namespace std;

Lamb::Lamb(int _x, int _y): MilkProducingAnimal(_x,_y,"Baaa", 'L'), MeatProducingAnimal(_x,_y,"Baaa", 'L'){

}

void Lamb::GiveMeat(){
    Player::GetInstance()->AddInventory(new LambMeat());
}