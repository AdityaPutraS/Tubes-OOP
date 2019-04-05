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
        /**
        * \brief Konstructor default Barn
        * \param True jika di Barn tersebut ada grass
        */
        Barn(bool hasGrass);
        /**
        * \brief Mereturn true jika Cell yang sedang ditunjuk merupakan sebuah Barn
        */
        bool isBarn() const;
        /**
        * \brief Menjadikan Barn mempunyai grass
        */
        void setGrass(bool hasGrass);
};
//b
#endif