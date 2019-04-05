#include "LivingBeing/Platypus.h"
#include "Product/PlatypusEgg.h"
#include "LivingBeing/Player.h"
#include "World.h"

Platypus::Platypus(int x, int y): EggProducingAnimal(x,y,"Purrr", 'T',15), Animal(x, y, "Purrr", 'T', 15)
{}

void Platypus::Die(bool diedOfHunger)
{
    World::GetInstance()->addMsg("1 Platypus mati");
}

void Platypus::Interact()
{
    Player::GetInstance()->AddInventory(new PlatypusEgg());
    World::GetInstance()->addMsg("Kamu mendapat telur platypus");
}