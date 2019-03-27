#include "World.h"

World *World::world_instance = new World(40, 30);

World::World(int _w, int _h) : width(_w), height(_h), listLB(nullptr, nullptr, nullptr), catalog(nullptr, nullptr, nullptr)
{
    mapCell = new Cell *[_h];
    for (int i = 0; i < _h; i++)
    {
        mapCell[i] = new Cell[_w];
        for (int j = 0; j < _w; j++)
        {
            mapCell[i][j].setPos(Point(j, i));
        }
    }
}

World::~World()
{
    for (int y = 0; y < height; y++)
    {
        delete[] mapCell[y];
    }
    delete[] mapCell;
}

void World::addCatalog(SideProduct *sp)
{
    if (catalog.getIsi() == nullptr)
    {
        catalog.setIsi(sp);
    }
    else
    {
        catalog.addNext(sp);
    }
}

void World::addLB(LivingBeing *lb, int _x, int _y)
{
    if (listLB.getIsi() == nullptr)
    {
        listLB.setIsi(lb);
    }
    else
    {
        listLB.addNext(lb);
    }
    mapCell[_y][_x].setRenderChar(lb->getRenderChar());
}

bool World::setCell(Cell c, int _x, int _y)
{
    mapCell[_y][_x] = c;
    return true;
    //Masih mikir, return false kapan
}

void World::renderAll()
{
    for(int y = 0; y < height; y++)
    {
        for(int x = 0; x < width; x++)
        {
            mapCell[y][x].render();
        }
    }
    for(auto iterPrev = listLB.getPrev(); iterPrev != nullptr; iterPrev = iterPrev->getPrev())
    {
        iterPrev->getIsi()->render();
    }
    for(auto iterNext = listLB.getNext(); iterNext != nullptr; iterNext = iterNext->getNext())
    {
        iterNext->getIsi()->render();
    }
}