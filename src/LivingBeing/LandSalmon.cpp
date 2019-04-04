#include "../../include/LivingBeing/Landsalmon.h"
#include "LivingBeing/Player.h"
#include "Product/SalmonMeat.h"
#include <iostream>

using namespace std;

Landsalmon::Landsalmon(int x, int y) : EggProducingAnimal(x,y,"BlubBlubBlub", 'S'), MeatProducingAnimal(x,y,"BlubBlubBlub", 'S') {

}
//AWKWWKWKWKWKWKWKWKWKWKWK
//Landsalmon cok, bukan LandSalmon
void Landsalmon::GiveMeat(){
    Player::GetInstance()->AddInventory(new SalmonMeat());
} 