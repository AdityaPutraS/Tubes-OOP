/**
 * \class Land
 * \brief Land adalah base class untuk Barn, Coop, dan Grassland
 *
 * \author M. Khairul Makirin
 * 
 */

#ifndef _LAND_H
#define _LAND_H

#include "Cell.h"

#define landpointer Land*

class Land : public Cell{
    private:
        bool grass;

    public:
        /**
         * \param _pos posisi Land yang ingin dibentuk
         * \param _grass apakah di Land tersebut ada grass
         */
        Land(Point _pos, bool _grass = false, char renderChar);

        //Mengirimkan true jika Land punya grass
        bool hasGrass() const;

        //Menumbuhkan grass pada Land
        void growGrass();

        //Checking apakah land ini sebuah barn
        virtual bool isBarn() const;

        //Checking apakah land ini sebuah coop
        virtual bool isCoop() const{return false;}

        //Checking apakah land ini sebuah grassland
        virtual bool isGrassland() const{return false;}
};

#endif