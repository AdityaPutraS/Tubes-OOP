#include "LivingBeing/Chicken.h"
#include "LivingBeing/Player.h"
#include "Product/ChickenMeat.h"
#include "Product/ChickenEgg.h"
#include "World.h"


Chicken::Chicken(int x, int y): EggProducingAnimal(x,y,"Kokokpetok", 'C',7), MeatProducingAnimal(x,y,"Kokokpetok", 'C',7), Animal(x, y, "Kokokpetok", 'C', 7){
    
}


bool Chicken::MoveRandom(){
    if(EggProducingAnimal::MoveRandom())
    {
        return true;
    } else if(MeatProducingAnimal::MoveRandom()) {
        return true;
    } else {
        return false;
    }
}

void Chicken::Die(bool diedOfHunger){
    if(!diedOfHunger){
        Player::GetInstance()->AddInventory(new ChickenMeat());
    }
    World::GetInstance()->addMsg("1 Chicken Mati");
}

void Chicken::Interact()
{
    Player::GetInstance()->AddInventory(new ChickenEgg());
    World::GetInstance()->addMsg("Kamu mendapat telur ayam");
}