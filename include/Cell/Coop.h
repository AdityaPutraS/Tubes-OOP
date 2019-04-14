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
        * \param hasGrass Apakah di Coop tersebut ada grass
        */
        Coop(bool hasGrass);
        /** 
         * \brief Meng-overwrite fungsi generik isCoop
         * sehingga jika kelas Coop memanggil isCoop
         * akan mereturn true, tapi kalau kelas lain yang manggil
         * akan mereturn false
         */
        bool isCoop() const;
        /**
        * \brief Menjadikan Coop mempunyai grass
        * \param hasGrass true jika akan ada grass, false jika tidak
        */
        void setGrass(bool hasGrass);

};


#endif