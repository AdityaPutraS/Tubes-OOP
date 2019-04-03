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
        Truck(int x, int y);
        //Interact(produk) akan menjual produk tersebut dan menambah uang player
        void interact();
};

#endif