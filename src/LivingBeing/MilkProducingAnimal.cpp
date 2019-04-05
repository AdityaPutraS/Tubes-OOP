#include "LivingBeing/MilkProducingAnimal.h"
#include "World.h"

MilkProducingAnimal::MilkProducingAnimal(int _x, int _y, string _animalSound, char _repChar, int maxHunger) : Animal(_x, _y, _animalSound, _repChar, maxHunger){
}

bool MilkProducingAnimal::MoveRandom()
{
    bool moveValid = false;
    int i = 0;
    direction randDir;
    while (i < 4 && !moveValid)
    {
        srand(1);
        randDir = static_cast<direction>(rand() % 4 + 1);
        if (randDir == up && World::GetInstance()->getLand(x, y - 1)->isGrassland())
        {
            moveValid = true;
        }
        else if (randDir == down && World::GetInstance()->getLand(x, y + 1)->isGrassland())
        {
            moveValid = true;
        }
        else if (randDir == left && World::GetInstance()->getLand(x - 1, y)->isGrassland())
        {
            moveValid = true;
        }
        else if (randDir == right && World::GetInstance()->getLand(x + 1, y)->isGrassland())
        {
            moveValid = true;
        }
        i++;
    }
    if(moveValid)
    {
        this->Move(randDir);
    }
    return moveValid;
}