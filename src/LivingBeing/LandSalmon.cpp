#include "LivingBeing/Landsalmon.h"
#include "LivingBeing/Player.h"
#include "Product/SalmonMeat.h"
#include "Product/SalmonEgg.h"
#include "World.h"

Landsalmon::Landsalmon(int x, int y) : MeatProducingAnimal(x, y, "BlubBlubBlub", 'S', 7), EggProducingAnimal(x, y, "BlubBlubBlub", 'S', 7), Animal(x, y, "BlubBlubBlub", 'S', 7)
{
}

bool Landsalmon::MoveRandom()
{
    if (EggProducingAnimal::MoveRandom())
    {
        return true;
    }
    else if (MeatProducingAnimal::MoveRandom())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Landsalmon::Die(bool diedOfHunger)
{
    if (!diedOfHunger)
    {
        Player::GetInstance()->AddInventory(new SalmonMeat());
    }
    World::GetInstance()->addMsg("1 Landsalmon Mati");
}

void Landsalmon::Interact()
{
    Player::GetInstance()->AddInventory(new SalmonEgg());
    World::GetInstance()->addMsg("Kamu mendapat telur salmon");
}