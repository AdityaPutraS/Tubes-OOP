#include "include/World.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Memulai harvest moon bohongan" << endl;
    cout << "Merender pemandangan awal" <<  endl;
    World::getInstance()->renderAll();
}