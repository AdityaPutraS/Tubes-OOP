#include "LivingBeing/Cow.h"
#include "LivingBeing/Player.h"
#include "Product/CowMeat.h"
#include "Product/CowMilk.h"
#include "World.h"

Cow::Cow(int _x, int _y): MilkProducingAnimal(_x,_y,"Mooo", 'B',8), MeatProducingAnimal(_x,_y,"Mooo", 'B',8), Animal(_x, _y, "Mooo", 'B', 8){

}

bool Cow::MoveRandom(){
    if(MilkProducingAnimal::MoveRandom())
    {
        return true;
    } else if(MeatProducingAnimal::MoveRandom()) {
        return true;
    } else {
        return false;
    }
}

void Cow::Die(bool diedOfHunger){
    if(!diedOfHunger){
        Player::GetInstance()->AddInventory(new CowMeat());
    }
    World::GetInstance()->addMsg("1 Cow Mati");
}

void Cow::Interact()
{
    Player::GetInstance()->AddInventory(new CowMilk());
    World::GetInstance()->addMsg("Kamu mendapat susu sapi");
}