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
#include <vector>

class Mixer : public Facility
{
  private:
    /**
         * \brief catalog adalah linked list dari SideProduct yang
         * menampung semua SideProduct yang terdefinisi dalam game
         */
    static vector<SideProduct> catalog;

  public:
    Mixer(Point pos);
    static SideProduct mix(Product P1, Product P2);
    void interact();
    static void initCatalog();
    /**
         * \brief Menambahkan SideProduct baru ke katalog
         * \param SP SideProduct yang akan ditambahkan
         */
    static void addToCatalog(int price, string namaSP);

    bool isMixer() const;
};

#endif