#ifndef _LAND_H
#define _LAND_H

#include "Cell.h"

#define landpointer Land*

class Land : public Cell{
    private:
        bool grass;

    public:
        //ctor berparameter position dan grass
        Land(Point, bool);

        //dtor jika diperlukan untuk point<int>
        ~Land();

        //Mengirimkan true jika Land punya grass
        bool hasGrass() const;

        //Menumbuhkan grass pada Land
        void growGrass();

        //Merender grass (# atau -)
        virtual void render() const;

        virtual bool isBarn() const{return false;}

        virtual bool isCoop() const{return false;}

        virtual bool isGrassland() const{return false;}
};

#endif