/**
 * \class Coop
 * \brief Coop adalah kelas untuk mengembangbiakan hewan kombong
 *
 * \author M. Khairul Makirin
 * 
 */

#ifndef _COOP_H
#define _COOP_H

#include "Land.h"

#define cooppointer Coop*

class Coop : public Land{
    public:
        //CTOR
        Coop(bool hasGrass);

        //method
        bool isCoop() const;

        //method
        void setGrass(bool hasGrass);

};


#endif