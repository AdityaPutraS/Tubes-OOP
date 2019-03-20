/**
 * \class World
 * \brief Class yang menampung semua objek yang ada di game
 * 
 * Class ini dibuat dengan tujuan menyimpan semua objek yang ada di game
 * dan melakukan manipulasi terhadap objek tersebut. Class ini diimplementasikan
 * menggunakkan Singleton Pattern yaitu hanya ada 1 objek untuk tiap program
 * 
 * 
 * \author Ahmad Rizal Alifio & Aditya Putra Santosa
 * 
 */
#ifndef _WORLD_H
#define _WORLD_H

#include <iostream>
#include "Product/SideProduct.h"
#include "Cell/Cell.h"
#include "LivingBeing/LivingBeing.h"
using namespace std;

class World {
    protected:
        /**
         * \brief mapCell adalah array 2 dimensi dari Cell
         */
        Cell** mapCell;
        /**
         * \breif mapLB adalah array 2 dimensi dari LivingBeing
         * menampung semua objek living being yang ada di game
         */
        LivingBeing** mapLB;
        /**
         * \brief catalog adalah array 1 dimensi dari SideProduct
         * menampung semua SideProduct yang terdefinisi dalam game
         */
        SideProduct* catalog;
        /**
         * \brief Singleton Pattern, objek statis yang hanya ada 1 dan bisa diakses dimanapun
         */
        static World* world_instance;
        
        /**
         * \brief Constructor World, Singleton Pattern maka di private agar user tidak bisa
         * menciptakan objek World lainnya
         * \param _width lebar array 2D mapCell, mapLB
         * \param _height tinggi array 2D mapCell, mapLB
         */
        World(int _width, int _height);
    
    public:
        /**
         * \brief Destructor World, mendealokasi mapCell, mapLB, catalog
         */
        ~World();

        /**
         * \brief Singleton Pattern, mengembalikan instance world yang bisa diakses dimanapun
         */
        static World* getInstance();
        /**
         * \brief Menambahkan SideProduct baru ke katalog
         * \param sp SideProduct yang akan ditambahkan
         */
        void addCatalog(SideProduct sp);
        /**
         * \brief Mengeset living being pada posisi _x dan _y
         * \param lb LivingBeing yang akan dimasukkan ke mapLB
         * \param _x posisi x living being
         * \param _y posisi y living being
         */
        void setLB(LivingBeing lb, int _x, int _y);
        /**
         * \brief Mengeset cell pada posisi _x dan _y
         * \param c Cell yang akan dimasukkan ke mapCell
         * \param _x posisi x cell
         * \param _y posisi y cell
         */
        bool setCell(Cell c, int _x, int _y;
        /**
         * \brief Merender semua cell dan living being dengan memanggil method render
         */
        void renderAll();
        
};

#endif