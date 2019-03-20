/**
 * \class Grassland
 * \brief Grassland adalah kelas untuk mengembangbiakan hewan ternak
 *
 * \author M. Khairul Makirin
 * 
 */

#ifndef _GRASSLAND_H
#define _GRASSLAND_H

#include "Land.h"

#define grasslandpointer Grassland*

class Grassland : public Land{
    public:
        /**
         * \param _pos posisi Grassland yang ingin dibentuk
         * \param _grass apakah di Grassland tersebut ada grass
         */
        Grassland(Point _pos, bool _grass);

        bool isGrassland() const{return true;}

};



#endif