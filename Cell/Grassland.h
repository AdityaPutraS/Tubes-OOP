#ifndef _GRASSLAND_H
#define _GRASSLAND_H

#include "Land.h"
#include "Animal.h"

#define grasslandpointer Grassland*

class Grassland : public Land{
    public:
        //ctor berparameter posisi
        Grassland(Point _pos, bool _grass);

        bool isGrassland() const{return true;}

};



#endif