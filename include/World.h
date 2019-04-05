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
#include "LivingBeing/Animal.h"
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
         * \brief listAnimal adalah vector dari Animal yang
         * menampung semua objek Animal yang ada di game
         */
        vector<Animal*> listAnimal;
        /** \brief listFacil adalah vector dari Facility yang 
         * menampung semua objek Facility yang ada di game
         */
        vector<Facility*> listFacil;
        /**
         * \brief listMsg adalah vector dari string yang menampung pesan pesan
         * yang muncul agar dilihat player, maksimal muncul 40 pesan
         */
        vector<string> listMsg;
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
        Point getSize(){return Point(width, height);}
        /**
         * \brief Singleton Pattern, mengembalikan instance world yang bisa diakses dimanapun
         */
        static World* GetInstance(){return world_instance;}
        
        /**
         * \brief Menambah animal pada posisi _x dan _y
         * \param la Animal yang akan dimasukkan ke listAnimal
         * \param _x posisi x Animal
         * \param _y posisi y Animal
         */
        void addAnimal(Animal *la, int _x, int _y);
        /**
         * \brief Menambah living being pada posisi _x dan _y
         * \param lb LivingBeing yang akan dimasukkan ke listAnimal
         * \param _x posisi x living being
         * \param _y posisi y living being
         */
        void addFacil(Facility *lb, int _x, int _y);
        /**
         * \brief Menambah pesan ke listMsg agar dilihat player
         */
        void addMsg(string s);
        /**
         * \brief Mengeset Land pada posisi _x dan _y
         * \param c Land yang akan dimasukkan ke mapLand
         * \param _x posisi x Land
         * \param _y posisi y Land
         */
        bool setLand(Land* c, int _x, int _y);
        /**
         * \brief Getter dari mapLand pada posisi x, y
         */
        Land* getLand(int x, int y);
        /**
         * \brief Mengeset bawah petak [x,y] terisi/tidak oleh sesuatu
         */
        void setTerisi(int x, int y, bool isi);
        /**
         * \brief Mengecek apakah petak [x,y] terisi Animal / Facility / Player
         */
        bool isTerisi(int x, int y);
        /**
         * \brief Merender semua Land dan living being dengan memanggil method render
         */
        void renderAll();
        /**
         * \brief Mengupdate semua objek di dunia ini
         */
        void updateAll();
        /**
         * \brief Mereturn binatang yang ada di atas, kiri, kanan, bawah posisi x,y
         */
        vector<Animal*> getNearestAnimal(int x, int y);
        /**
         * \brief Mereturn fasilitas yang ada di atas, kiri, kanan, bawah posisi x,y
         */
        vector<Facility*> getNearestFacility(int x, int y);
        /**
         * \brief Mereturn nilai tick
         */
        int getTick() const;
        /**
         * \brief Mengecek jika masih ada hewan yang hidup, jika ada return true
         * jika tidak return false
         */
        bool anybodyAlife();
        /**
         * \brief Mengapus semua message yang telah dicetak
         */
        void emptyMessage();
        /**
         * \brief Menghapus hewan yang disimpan di listAnimal
         * \param Objek animal yang ingin di hapus
         */
        void hapusAnimal(Animal* a);
};

#endif