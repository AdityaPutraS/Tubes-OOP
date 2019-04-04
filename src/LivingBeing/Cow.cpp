#include "../../include/LivingBeing/Cow.h"
#include "LivingBeing/Player.h"
#include "Product/CowMeat.h"
#include <iostream>

using namespace std;

Cow::Cow(int _x, int _y): MilkProducingAnimal(_x,_y,"Mooo", 'B'), MeatProducingAnimal(_x,_y,"Mooo", 'B'){

}
    
void Cow::GiveMeat(){
    Player::GetInstance()->AddInventory(new CowMeat());
}