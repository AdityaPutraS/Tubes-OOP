/**
 * \class Well
 * \brief Well adalah kelas untuk objek Well yang berguna mengubah nilai water player menjadi 100
 *
 * \author Aditya Putra S.
 * 
 */

#ifndef WELL_H
#define WELL_H

#include "Facility.h"

class Well : public Facility
{
    public:
        Well(int x, int y);
        //Interact akan mengubah nilai water player menjadi 100
        void interact();
};

#endif