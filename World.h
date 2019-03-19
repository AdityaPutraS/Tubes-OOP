#ifndef _WORLD_H
#define _WORLD_H

/*
* CATATAN
* 
*/

#include <iostream>
using namespace std;

class World {
    protected:
        Cell** mapCell;
        LivingBeing** mapLB;
        SideProduct* catalog;
        static World* world_instance;
        
        //CTOR (Singleton Pattern)
        World(int _width, int _height);
    
    public:
        //DTOR
        ~World();

        //METHOD
        static World* getInstance();
        void addCatalog(SideProduct sp);
        void setLB(LivingBeing lb, int _x, int _y);
            //menaruh lb di _x, _y
        bool setCell(Cell c, int _x, int _y;
            //menaruh c di _x, _y
        void renderAll(int _x, int _y);
            //Menggambar seluruh Cell dan LivingBeing mulai dari _x, _y
        
};
#endif