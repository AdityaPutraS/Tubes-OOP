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
         * \brief Meng-overwrite fungsi generik isBarn
         * sehingga jika kelas Barn memanggil isBarn
         * akan mereturn true, tapi kalau kelas lain yang manggil
         * akan mereturn false
         */
        bool isBarn() const;
        /**
        * \brief Menjadikan Barn mempunyai grass
        * \param true jika akan ada grass, false jika tidak
        */
        void setGrass(bool hasGrass);
};
//b
#endif