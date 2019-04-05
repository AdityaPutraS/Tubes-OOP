#include "LivingBeing/Diplodocus.h"
#include "LivingBeing/Player.h"
#include "Product/DiplodocusMeat.h"
#include "Product/DiplodocusEgg.h"
#include "World.h"

Diplodocus::Diplodocus(int _x, int _y): EggProducingAnimal(_x,_y,"Rawr XD", 'D', 10), MeatProducingAnimal(_x,_y,"Rawr XD", 'D', 10), Animal(_x, _y, "Rawr XD", 'D', 10){

}

bool Diplodocus::MoveRandom(){
    if(MeatProducingAnimal::MoveRandom())
    {
        return true;
    } else if(EggProducingAnimal::MoveRandom()) {
        return true;
    } else {
        return false;
    }
}

void Diplodocus::Die(bool diedOfHunger){
    if(!diedOfHunger){
        Player::GetInstance()->AddInventory(new DiplodocusMeat());
    }
    World::GetInstance()->addMsg("1 Diplodocus Mati");
}

void Diplodocus::Interact()
{
    Player::GetInstance()->AddInventory(new DiplodocusEgg());
    World::GetInstance()->addMsg("Kamu mendapat telur diplodocus, WOW");
}