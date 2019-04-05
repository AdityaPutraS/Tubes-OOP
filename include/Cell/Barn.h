/**
 * \class Barn
 * \brief Barn adalah kelas untuk mengembangbiakan hewan lumbung
 *
 * \author M. Khairul Makirin
 * 
 */

#ifndef _BARN_H
#define _BARN_H

#include "Land.h"

class Barn : public Land{
    public:
        //CTOR
        Barn(bool hasGrass);

        //method
        bool isBarn() const;

        //method
        void setGrass(bool hasGrass);
};
//b
#endif