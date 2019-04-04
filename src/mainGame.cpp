//hantu
#include <iostream>
#include "../include/Product/SideProduct.h"
#include "World.h"
#include "../include/Cell/AllLand.h"
#include "../include/Cell/AllFacil.h"

using namespace std;

int main()
{
    Mixer::initCatalog();
    //Peta kaya di spek
    for (int y = 0; y < 11; y++)
    {
        for (int x = 0; x < 11; x++)
        {
            World::GetInstance()->setLand(new Grassland(false), x, y);
        }
    }
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            World::GetInstance()->setLand(new Coop(false), x, y);
        }
    }
    for (int y = 0; y < 6; y++)
    {
        for (int x = 4; x < 8; x++)
        {
            World::GetInstance()->setLand(new Barn(false), x, y);
        }
    }
    World::GetInstance()->addFacil(new Truck(Point(10, 0)), 10, 0);
    World::GetInstance()->addFacil(new Mixer(Point(10, 1)), 10, 1);
    World::GetInstance()->addFacil(new Well(Point(10, 3)), 10, 3);

    //World::GetInstance()->addLB(new LandSalmon(...));

    World::GetInstance()->renderAll();

    World::GetInstance()->updateAll();

    getch();
    endwin();
}