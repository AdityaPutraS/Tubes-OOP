/**
 * \class Truck
 * \brief Truck adalah kelas untuk objek truck yang berguna menjual barang player
 *
 * \author Aditya Putra S.
 * 
 */

#ifndef TRUCK_H
#define TRUCK_H

#include "Facility.h"

class Truck : public Facility
{
    public:
        Truck(Point pos);
        //Interact(produk) akan menjual produk tersebut dan menambah uang player
        void interact();

        bool isTruck() const;
};

#endif