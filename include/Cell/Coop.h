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
        /**
        * \brief Konstruktor default Coop
        */
        Coop(bool hasGrass);
        /**
        * \brief Mereturn true jika Cell yang sedang ditunjuk merupakan sebuah Coop
        */
        bool isCoop() const;
        /**
        * \brief Menjadikan Coop mempunyai grass
        */
        void setGrass(bool hasGrass);

};


#endif