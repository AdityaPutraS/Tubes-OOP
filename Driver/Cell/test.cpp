#include "../../include/Cell/Cell.h"
#include "../../include/Cell/Land.h"
// #include "Land/Facility.h"
// #include "Land/Land.h"
#include "../../include/Cell/Grassland.h"
// #include "Land/Mixer.h"
#include <iostream>
#include <vector>

using namespace std;

void setLand(Land ***&mapLand, Land *c, int x, int y)
{
    delete mapLand[y][x];
    c->setPos(Point(x, y));
    mapLand[y][x] = c;
}
//Bantu buat semua living being.cpp nya io
//hi guys
int main()
{
    Land ***mapLand;
    int width = 10;
    int height = 10;
    mapLand = new Land **[height];
    for (int i = 0; i < height; i++)
    {
        mapLand[i] = new Land *[width];
        for(int j = 0; j < width; j++)
        {
            mapLand[i][j] = new Land();
        }
    }
    for (int i = 0; i < width; i++)
    {
        setLand(mapLand, new Grassland(), i, 0);
    }
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            cout << mapLand[y][x]->getRenderChar() << " ";
        }
        cout << endl;
    }
    if(mapLand[0][1]->isGrassland())
    {
       cout << "Grassland" << endl; 
    }
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            delete mapLand[y][x];
        }
        delete[] mapLand[y];
    }
    delete[] mapLand;
}