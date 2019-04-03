/**
 * \class Mixer
 * \brief Mixer adalah kelas untuk objek Mixer yang berguna mencampur barang player
 *
 * \author Aditya Putra S.
 * 
 */

#ifndef MIXER_H
#define MIXER_H

#include "Facility.h"
#include "Product/SideProduct.h"
#include "Generik/LinkedList.h"
#include "Point.h"

class Mixer : public Facility
{
    private:
        /**
         * \brief catalog adalah linked list dari SideProduct yang
         * menampung semua SideProduct yang terdefinisi dalam game
         */
        static LinkedList<SideProduct> catalog;
    public:
        Mixer(Point pos);
        SideProduct mix(Product P1, Product P2);
        void interact();
        static void initCatalog();
        /**
         * \brief Menambahkan SideProduct baru ke katalog
         * \param SP SideProduct yang akan ditambahkan
         */
        static void addToCatalog(SideProduct SP);
};

#endif