#include "../../include/LivingBeing/Chicken.h"
#include "LivingBeing/Player.h"
#include "Product/ChickenMeat.h"
#include <iostream>

using namespace std;

Chicken::Chicken(int x, int y): EggProducingAnimal(x,y,"Kokokpetok", 'C'), MeatProducingAnimal(x,y,"Kokokpetok", 'C'){
    
}

void Chicken::GiveMeat(){
    Player::GetInstance()->AddInventory(new ChickenMeat());
}
