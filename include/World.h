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
#include "Cell/Land.h"
#include "Cell/Facility.h"
#include "LivingBeing/LivingBeing.h"
#include <vector>
using namespace std;

class World {
    protected:
        /**
         * \brief menandakan berapa tick/detik game sudah berjalan
         */
        int tick;
        /**
         * \brief width adalah lebar dari dunia game
         */
        int width;
        /**
         * \brief height adalah tinggi dari dunia game
         */
        int height;
        /**
         * \brief terisi adalah map 2d of bool yang menandakan apakah suatu
         * petak sudah diisi sesuatu / belum, Sesuatu bisa berupa Animal / Facility
         */
        bool** terisi;
        /**
         * \brief mapLand adalah array 2 dimensi dari pointer of Land
         */
        Land*** mapLand;
        /**
         * \brief listLB adalah vector dari LivingBeing yang
         * menampung semua objek living being yang ada di game
         */
        vector<LivingBeing*> listLB;
        /** \brief listFacil adalah vector dari Facility yang 
         * menampung semua objek Facility yang ada di game
         */
        vector<Facility*> listFacil;
    
        /**
         * \brief Singleton Pattern, objek statis yang hanya ada 1 dan bisa diakses dimanapun
         */
        static World* world_instance;
        
        /**
         * \brief Constructor World, Singleton Pattern maka di private agar user tidak bisa
         * menciptakan objek World lainnya
         * \param _width lebar array 2D mapLand, mapLB
         * \param _height tinggi array 2D mapLand, mapLB
         */
        World(int _width, int _height);
    
    public:
        /**
         * \brief Destructor World, mendealokasi mapLand, mapLB, catalog
         */
        ~World();

        /**
         * \brief Singleton Pattern, mengembalikan instance world yang bisa diakses dimanapun
         */
        static World* GetInstance(){return world_instance;}
        
        /**
         * \brief Menambah living being pada posisi _x dan _y
         * \param lb LivingBeing yang akan dimasukkan ke listLB
         * \param _x posisi x living being
         * \param _y posisi y living being
         */
        void addLB(LivingBeing *lb, int _x, int _y);
        /**
         * \brief Menambah living being pada posisi _x dan _y
         * \param lb LivingBeing yang akan dimasukkan ke listLB
         * \param _x posisi x living being
         * \param _y posisi y living being
         */
        void addFacil(Facility *lb, int _x, int _y);
        /**
         * \brief Mengeset Land pada posisi _x dan _y
         * \param c Land yang akan dimasukkan ke mapLand
         * \param _x posisi x Land
         * \param _y posisi y Land
         */
        bool setLand(Land* c, int _x, int _y);
        /**
         * \brief Mengeset bawah petak [x,y] terisi/tidak oleh sesuatu
         */
        void setTerisi(int x, int y, bool isi);
        /**
         * \brief Mengecek apakah petak [x,y] terisi Animal / Facility / Player
         */
        void isTerisi(int x, int y);
        /**
         * \brief Merender semua Land dan living being dengan memanggil method render
         */
        void renderAll();
        /**
         * \brief Mengupdate semua objek di dunia ini
         */
        void updateAll();
};

#endif