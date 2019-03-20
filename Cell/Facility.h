/**
 * \class Facility
 * \brief Facility adalah kelas untuk fasilitas seperti Mixer, Well, dan Truck
 *
 * \author Aditya Putra S.
 * 
 */

#ifndef FACILITY_H
#define FACILITY_H

#include "../Product.h"
#include "Cell.h"

class Facility : public Cell
{
    protected:
        int x, y;
    public:
        Facility(int x, int y);
};

class Well : public Facility
{
    public:
        Well(int x, int y);
        //Interact akan mengubah nilai water player menjadi 100
        void interact();
};

class Mixer : public Facility
{
    public:
        Mixer(int x, int y);
        SideProduct mix(Product P1, Product P2);
};

class Truck : public Facility
{
    public:
        Truck(int x, int y);
        //Interact(produk) akan menjual produk tersebut dan menambah uang player
        void interact();
};

#endif