#ifndef _LAND_H
#define _LAND_H

#include "Cell.h"

#define landpointer Land*

class Land : public Cell{
    private:
        bool grass;

    public:
        //ctor berparameter position dan grass
        Land(Point _pos, bool _grass = false);

        //Mengirimkan true jika Land punya grass
        bool hasGrass() const;

        //Menumbuhkan grass pada Land
        void growGrass();

        //Checking apakah land ini sebuah barn
        virtual bool isBarn() const{return false;}

        //Checking apakah land ini sebuah coop
        virtual bool isCoop() const{return false;}

        //Checking apakah land ini sebuah grassland
        virtual bool isGrassland() const{return false;}
};

#endif