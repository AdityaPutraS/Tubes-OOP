#include "World.h"

World *World::world_instance = new World(11, 11);

World::World(int _w, int _h) : width(_w), height(_h), listLB(), tick(0)
{
    mapLand = new Land **[_h];
    terisi = new bool *[_h];
    for (int i = 0; i < _h; i++)
    {
        mapLand[i] = new Land *[_w];
        terisi[i] = new bool [_w];
        for (int j = 0; j < _w; j++)
        {
            mapLand[i][j] = new Land(Point(j, i), '-');
        }
    }
}

World::~World()
{
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            delete mapLand[y][x];
        }
        delete[] mapLand[y];
        delete[] terisi[y];
    }
    delete[] mapLand;
    delete[] terisi;
    for(LivingBeing* LB : listLB)
    {
        delete LB;
    }
}

void World::addLB(LivingBeing *lb, int _x, int _y)
{
    listLB.push_back(lb);
    //mapLand[_y][_x]->setRenderChar(lb->getRenderChar());
}

void World::addFacil(Facility *lf, int _x, int _y)
{
    listFacil.push_back(lf);
    //mapLand[_y][_x]->setRenderChar(lf->getRenderChar());
}

bool World::setLand(Land* c, int _x, int _y)
{
    delete mapLand[_y][_x];
    c->setPos(Point(_x, _y));
    c->setPosLayar(_x, _y);
    mapLand[_y][_x] = c;
    return true;
}

void World::renderAll()
{
    //Gambar game
    //Map
    Tampilan::GetInstance()->drawtable(0,0,3,2,11,11);
    //Nama Game
    Tampilan::GetInstance()->drawtable(34,0,33,2,1,1);
    Tampilan::GetInstance()->printStringTable("Engi's Farm", 34,0,10, 2, 1, 0);
    //Inventory
    Tampilan::GetInstance()->printstronpos("Inventory: ",34, 3);
    Tampilan::GetInstance()->drawtable(34, 4, 33,14, 1, 1);
    Tampilan::GetInstance()->printStringTable("- ChickenEgg",34, 4, 33, 1, 0, 0);
    Tampilan::GetInstance()->printStringTable("- ChickenEgg",34, 4, 33, 1, 0, 1);
    Tampilan::GetInstance()->printStringTable("- BeefRolade",34, 4, 33, 1, 0, 2);
    //Money & Water
    Tampilan::GetInstance()->printStringTable("Money: ",34, 18, 8, 1, 0, 0);
    string uang = to_string(32);
    Tampilan::GetInstance()->printStringTable(uang,34, 18, 8, 1, 1, 0);
    Tampilan::GetInstance()->printStringTable("Water: ",34, 20, 8, 1, 0, 0);
    string air = to_string(100);
    Tampilan::GetInstance()->printStringTable(air,34, 20, 8, 1, 1, 0);
    //Keterangan
    Tampilan::GetInstance()->drawtable(68,0,20,25 ,1, 1);
    Tampilan::GetInstance()->printStringTable("Keterangan:", 68,0, 20, 1, 0,0);
    Tampilan::GetInstance()->printStringTable("C: Ayam", 68,0, 20, 1, 0,1);
    Tampilan::GetInstance()->printStringTable("G: Kambing", 68,0, 20, 1, 0,2);
    Tampilan::GetInstance()->printStringTable("H: Kuda", 68,0, 20, 1, 0,3);
    Tampilan::GetInstance()->printStringTable("T: Truck", 68,0, 20, 1, 0,4);
    Tampilan::GetInstance()->printStringTable("M: Mixer", 68,0, 20, 1, 0,5);
    Tampilan::GetInstance()->printStringTable("W: Well", 68,0, 20, 1, 0,6);
    Tampilan::GetInstance()->printStringTable("P: Player", 68,0, 20, 1, 0,8);
    Tampilan::GetInstance()->printStringTable("-: Grassland", 68,0, 20, 1, 0,10);
    Tampilan::GetInstance()->printStringTable("x: Barn", 68,0, 20, 1, 0,11);
    Tampilan::GetInstance()->printStringTable("o: Coop", 68,0, 20, 1, 0,12);
    Tampilan::GetInstance()->printStringTable("*,@,#: Land dengan", 68,0, 20, 1, 0,14);
    Tampilan::GetInstance()->printStringTable("rumput", 68,0, 20, 1, 0,15);
    for(int y = 0; y < height; y++)
    {
        for(int x = 0; x < width; x++)
        {
            mapLand[y][x]->render();
        }
    }
    for(LivingBeing* LB : listLB)
    {
        LB->render();
    }
    for(Facility* LF : listFacil)
    {
        LF->render();
    }
    //Command
    Tampilan::GetInstance()->drawtable(0, 23, 67, 2,1,1);
    Tampilan::GetInstance()->printStringTable("Command : ", 0, 23, 66,1, 0, 0);
    Tampilan::GetInstance()->updateLayar();
}

void World::updateAll()
{
    tick += 1;
    
}