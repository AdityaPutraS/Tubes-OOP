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

class Land : public Cell{
    protected:
        bool grass;

    public:
        /**
         * \brief Default constructor
         */
        Land();
        /**
         * \param _pos posisi Land yang ingin dibentuk
         * \param _renderChar karakter yang akan di render nantinya
         * \param _grass apakah di Land tersebut ada grass
         */
        Land(Point _pos, char _renderChar, bool _grass = false);

        //Mengirimkan true jika Land punya grass
        bool hasGrass() const;

        //Menumbuhkan grass pada Land, implementasi di Barn, Coop, dan Grassland
        virtual void setGrass(bool hasGrass);
};

#endif