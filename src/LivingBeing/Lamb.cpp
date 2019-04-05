#include "LivingBeing/Lamb.h"
#include "LivingBeing/Player.h"
#include "Product/LambMeat.h"
#include "Product/LambMilk.h"
#include "World.h"

Lamb::Lamb(int _x, int _y) : MilkProducingAnimal(_x, _y, "Baaa", 'L', 8), MeatProducingAnimal(_x, _y, "Baaa", 'L', 8), Animal(_x, _y, "Baaa", 'L', 8)
{
}

bool Lamb::MoveRandom()
{
    if (MilkProducingAnimal::MoveRandom())
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

void Lamb::Die(bool diedOfHunger)
{
    if (!diedOfHunger)
    {
        Player::GetInstance()->AddInventory(new LambMeat());
    }
    World::GetInstance()->addMsg("1 Lamb Mati");
}

void Lamb::Interact()
{
    Player::GetInstance()->AddInventory(new LambMilk());
    World::GetInstance()->addMsg("Kamu mendapat susu domba");
}