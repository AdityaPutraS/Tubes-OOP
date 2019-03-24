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
        //method
        bool isGrassland() const{return true;}

};



#endif