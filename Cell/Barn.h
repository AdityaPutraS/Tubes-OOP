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
        /**
         * \param _pos posisi Barn yang ingin dibentuk
         * \param _grass apakah di barn tersebut ada grass
         */
        Barn(Point _pos, bool _grass);

        bool isBarn() const{return true;}
};

#endif