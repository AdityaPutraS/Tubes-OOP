#include "LivingBeing/LivingBeing.h"
#include "World.h"
#include <iostream>
#include <cstdlib>
using namespace std;

LivingBeing::LivingBeing(int _x, int _y, char _repChar) : Renderable(_x, _y, 0, _repChar)
{
    x = _x;
    y = _y;
}

int LivingBeing::GetX() const
{
    return x;
}

int LivingBeing::GetY() const
{
    return y;
}

void LivingBeing::SetX(int _x)
{
    x = _x;
    this->setPosLayar(x, y);
}

void LivingBeing::SetY(int _y)
{
    y = _y;
    this->setPosLayar(x, y);
}

bool LivingBeing::Move(direction dirNumber)
{
    World::GetInstance()->setTerisi(x,y,false);
    if (dirNumber == up && y > 0 && !World::GetInstance()->isTerisi(x, y - 1))
    {
        this->SetY(y - 1);
    }
    else if (dirNumber == down && y < World::GetInstance()->getSize().getOrdinat() && !World::GetInstance()->isTerisi(x, y + 1))
    {
        this->SetY(y + 1);
    }
    else if (dirNumber == left && x > 0 && !World::GetInstance()->isTerisi(x - 1, y))
    {
        this->SetX(x - 1);
    }
    else if (dirNumber == right && x < World::GetInstance()->getSize().getAbsis() && !World::GetInstance()->isTerisi(x + 1, y))
    {
        this->SetX(x + 1);
    }
    else
    {
        World::GetInstance()->setTerisi(x,y,true);
        return false;
    }
    World::GetInstance()->setTerisi(x,y,true);
    return true;
}

