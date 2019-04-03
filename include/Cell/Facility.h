/**
 * \class Facility
 * \brief Facility adalah parent kelas untuk fasilitas seperti Mixer, Well, dan Truck
 *
 * \author Aditya Putra S.
 * 
 */

#ifndef FACILITY_H
#define FACILITY_H

#include "Product/Product.h"
#include "Cell.h"
#include "Point.h"

class Facility : public Cell
{
    public:
        Facility(Point pos, char _render);
        virtual void interact();
};

#endif