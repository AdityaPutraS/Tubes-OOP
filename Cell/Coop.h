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
         * \param _pos posisi Coop yang ingin dibentuk
         * \param _grass apakah di Coop tersebut ada grass
         */
        Coop(Point pos, bool _grass);

        bool isCoop() const{return true;}

};



#endif