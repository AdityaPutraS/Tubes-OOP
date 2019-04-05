/**
 * \class Player
 * \brief Player adalah class dari perwujudan pemain di game
 *
 * \author Ahmad Rizal Alifio
 * 
 */
#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>
#include "LivingBeing/LivingBeing.h"
#include "Product/Product.h"
#include "LivingBeing/Animal.h"
#include "Cell/Facility.h"
#include "Cell/Land.h"
#include "Generik/LinkedList.h"

using namespace std;

class Player: public LivingBeing {
    private:
        int water;  ///< Jumlah air yang dibawa Player
        int money;  ///< Jumlah uang yang dibawa Player
        /**
        * Implementasi inventori 
        * List yang isinya inventori player, berisi FarmProduct dan SideProduct, Ukuran default = 20
        */
        LinkedList<Product*>* tas; 
        /**
         * \brief Singleton pattern , instance variable dari player
         */
        static Player* player_instance;
        /**
         * \brief Constructor Player dengan predefined location, water, and money, dan tas ukuran default
         */
        Player();  
        /**
         * \brief Constructor Player dengan parametered location, water, money, dan tas ukuran default
         * \param _x posisi X Player
         * \param _y posisi Y Player
         * \param _water jumlah water yang dibawa player
         * \param _money jumlah uang yang dibawa player, default =0
         */
        Player(int _x, int _y, int _water, int _money);
    public:
        //GETTER
        int GetWater(); ///Getter water
        int GetMoney(); ///Getter money
        Point GetPos(); ///Getter posisi
        //SETTER
        void SetWater(int _water);  ///setter water
        void SetMoney(int _money);  ///setter money
        void SetPos(Point pos);     ///setter posisi
        static Player* GetInstance(){return player_instance;}

        //METHOD
        /**
         * \brief dipanggil saat command Talk Player dengan Animal, membunyikan suara animal
         */
        void TalkWith(Animal& animalia);
        /**
         * \brief Interaksi Player dengan Animal, mengambil Milk atau Egg
         * \note Hanya dapat digunakan ke MilkProducingAnimal atau EggProducingAnimal
         */
        void InteractWith(Animal& animalia);
        /**
         * \brief Interaksi Player dengan Facility, jika valid:
         * Well: Mengisi air yang dibawa player (int water)
         * Truck: Menjual semua Product yang ada pada inventori player
         * Mixer: Mengolah FarmProduct menjadi SideProduct, sesuai dengan resepnya
         * \note terdapat implementasi validasi posisi Player
         */
        void InteractWith(Facility& facilitia);
        /**
         * \brief Player menyembelih Animal, lalu mendapatFarmProduct berupa Meat dari Animal yang disembelih
         * dan dimasukkan ke list inventori
         * \note Hanya dapat digunakan ke MeatProducingAnimal
         */
        void Kill(Animal& animalia);
        /**
         * \brief Interaksi Player dengan Land, menumbuhkan rumput sebagai makanan dari Animal, mengurangi water sebanyak 1
         * \note terdapat implementasi validasi sudah ada rumput atau tidak
         */
        void Grow(Land& l);
        /**
         * \brief Menambah barang ke inventori player
         * \param _p refrence dari pointer ke product yang akan ditambahkan
         */
        void AddInventory(Product* _p);
        /**
         * \brief Mendapatkan refrence ke barang no sekian dari player
         * \param i nomor barang di tas
         */
        Product* GetInventory(int i);
        /**
         * \brief Mencari product di tas
         */
        int SearchInventory(string productName);
        /**
         * \brief Getter tas
         */
        LinkedList<Product*>* getTas();
        void RemoveTas();
        void MakeTas();
};
#endif