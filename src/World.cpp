#include "World.h"
#include "LivingBeing/Player.h"

World *World::world_instance = new World(11, 11);

World::World(int _w, int _h) : width(_w), height(_h), listLB(), tick(0)
{
    mapLand = new Land **[_h];
    terisi = new bool *[_h];
    for (int i = 0; i < _h; i++)
    {
        mapLand[i] = new Land *[_w];
        terisi[i] = new bool[_w];
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
    for (LivingBeing *LB : listLB)
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

void World::addMsg(string s)
{
    if (listMsg.size() >= 38)
    {
        listMsg.erase(listMsg.begin());
    }
    listMsg.push_back(s);
}

bool World::setLand(Land *c, int _x, int _y)
{
    delete mapLand[_y][_x];
    c->setPos(Point(_x, _y));
    c->setPosLayar(_x, _y);
    mapLand[_y][_x] = c;
    return true;
}

void World::setTerisi(int x, int y, bool isi)
{
    terisi[y][x] = isi;
}
bool World::isTerisi(int x, int y)
{
    return terisi[y][x];
}

void World::renderAll()
{
    //Gambar game
    //Map
    Tampilan::GetInstance()->drawtable(0, 0, 4, 2, 11, 11);
    //Nama Game
    Tampilan::GetInstance()->drawtable(45, 0, 31, 2, 1, 1);
    Tampilan::GetInstance()->printStringTable("Engi's Farm", 45, 0, 9, 2, 1, 0);
    //Inventory
    Tampilan::GetInstance()->printstronpos("Inventory: ", 45, 3);
    Tampilan::GetInstance()->drawtable(45, 4, 31, 14, 1, 1);
    for (int i = 0; i < Player::GetInstance()->getTas().getNeff(); i++)
    {
        string s = "- " + Player::GetInstance()->GetInventory(i)->getName();
        Tampilan::GetInstance()->printStringTable(s, 45, 4, 31, 1, 0, 0);
    }
    //Money, Water & Tick
    Tampilan::GetInstance()->printStringTable("Money: ", 45, 18, 9, 1, 0, 0);
    string uang = to_string(Player::GetInstance()->GetMoney());
    Tampilan::GetInstance()->printStringTable(uang, 45, 18, 9, 1, 1, 0);
    Tampilan::GetInstance()->printStringTable("Tick: ", 45, 18, 9, 1, 2, 0);
    string tickStr = to_string(tick);
    Tampilan::GetInstance()->printStringTable(tickStr, 45, 18, 9, 1, 3, 0);
    Tampilan::GetInstance()->printStringTable("Water: ", 45, 20, 9, 1, 0, 0);
    string air = to_string(Player::GetInstance()->GetWater());
    Tampilan::GetInstance()->printStringTable(air, 45, 20, 9, 1, 1, 0);
    //Keterangan
    Tampilan::GetInstance()->drawtable(77, 0, 20, 25, 1, 1);
    Tampilan::GetInstance()->printStringTable("Keterangan:", 77, 0, 20, 1, 0, 0);
    Tampilan::GetInstance()->printStringTable("C: Ayam", 77, 0, 20, 1, 0, 1);
    Tampilan::GetInstance()->printStringTable("G: Kambing", 77, 0, 20, 1, 0, 2);
    Tampilan::GetInstance()->printStringTable("H: Kuda", 77, 0, 20, 1, 0, 3);
    Tampilan::GetInstance()->printStringTable("T: Truck", 77, 0, 20, 1, 0, 4);
    Tampilan::GetInstance()->printStringTable("M: Mixer", 77, 0, 20, 1, 0, 5);
    Tampilan::GetInstance()->printStringTable("W: Well", 77, 0, 20, 1, 0, 6);
    Tampilan::GetInstance()->printStringTable("P: Player", 77, 0, 20, 1, 0, 8);
    Tampilan::GetInstance()->printStringTable("-: Grassland", 77, 0, 20, 1, 0, 10);
    Tampilan::GetInstance()->printStringTable("x: Barn", 77, 0, 20, 1, 0, 11);
    Tampilan::GetInstance()->printStringTable("o: Coop", 77, 0, 20, 1, 0, 12);
    Tampilan::GetInstance()->printStringTable("*,@,#: Land dengan", 77, 0, 20, 1, 0, 14);
    Tampilan::GetInstance()->printStringTable("rumput", 77, 0, 20, 1, 0, 15);
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            mapLand[y][x]->render();
        }
    }
    for (LivingBeing *LB : listLB)
    {
        LB->render();
    }
    for (Facility *LF : listFacil)
    {
        LF->render();
    }
    Player::GetInstance()->render();
    //Message history
    Tampilan::GetInstance()->printstronpos("Message: ", 0, 26);
    Tampilan::GetInstance()->drawtable(0, 27, 38, 20, 2, 1);
    for (int i = 0; i < listMsg.size(); i++)
    {
        string s = listMsg[i];
        Tampilan::GetInstance()->printStringTable(s, 0, 27, 38, 1, i / 19, i % 19);
    }
    //Command
    Tampilan::GetInstance()->drawtable(0, 23, 76, 2, 1, 1);
    Tampilan::GetInstance()->printStringTable("Command : ", 0, 23, 76, 1, 0, 0);
    Tampilan::GetInstance()->updateLayar();
}

void World::updateAll()
{
    tick += 1;
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            terisi[i][j] = false;
        }
    }
    for (LivingBeing *LB : listLB)
    {
        int x = LB->GetX();
        int y = LB->GetY();
        terisi[y][x] = true;
    }
    for (Facility *LF : listFacil)
    {
        int x = LF->getPoint().getAbsis();
        int y = LF->getPoint().getOrdinat();
        terisi[y][x] = true;
    }
    int x = Player::GetInstance()->GetX();
    int y = Player::GetInstance()->GetY();
    terisi[y][x] = true;
}