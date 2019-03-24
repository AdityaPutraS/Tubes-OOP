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

#define barnpointer Barn*

class Barn : public Land{
    public:
        //method
        bool isBarn() const;
};

#endif