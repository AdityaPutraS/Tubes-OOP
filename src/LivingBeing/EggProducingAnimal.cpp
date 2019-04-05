#include "LivingBeing/EggProducingAnimal.h"
#include "World.h"
#include "LivingBeing/Player.h"

EggProducingAnimal::EggProducingAnimal(int _x, int _y, string _animalSound, char _repChar, int maxHunger) : Animal(_x, _y, _animalSound, _repChar, maxHunger){
}

bool EggProducingAnimal::MoveRandom()
{
    bool moveValid = false;
    int i = 0;
    direction randDir;
    while (i < 4 && !moveValid)
    {
        srand(World::GetInstance()->getTick());
        randDir = static_cast<direction>(rand() % 5 + 1);
        if (randDir == up && World::GetInstance()->getLand(x, y - 1)->isCoop())
        {
            moveValid = true;
        }
        else if (randDir == down && World::GetInstance()->getLand(x, y + 1)->isCoop())
        {
            moveValid = true;
        }
        else if (randDir == left && World::GetInstance()->getLand(x - 1, y)->isCoop())
        {
            moveValid = true;
        }
        else if (randDir == right && World::GetInstance()->getLand(x + 1, y)->isCoop())
        {
            moveValid = true;
        }
        i++;
    }
    // World::GetInstance()->addMsg("EggAnimal Bergerak");
    if(moveValid)
    {
        this->Move(randDir);
    }
    return moveValid;
}