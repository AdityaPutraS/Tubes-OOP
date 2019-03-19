#ifndef _LAND_H
#define _LAND_H

#include "Cell.h"
#include "SharedClasses.h" //perlu ada kumpulan kelas yang mungkin bakal dipake, mis. point, dll

#define landpointer Land*

class Land : public Cell{
    private:
        bool grass;
        point<int> position;

    public:
        //ctor berparameter position dan grass
        Land(point<int>, bool);

        //dtor jika diperlukan untuk point<int>
        ~Land();

        //Mengirimkan true jika Land punya grass
        bool hasGrass() const{return grass;}

        //Menumbuhkan grass pada Land
        void growGrass(){grass = true;}

        //Merender grass (# atau -)
        virtual void render() const;

        virtual bool isBarn() const{return false;}

        virtual bool isCoop() const{return false;}

        virtual bool isGrassland() const{return false;}
};

#endif