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
        * \brief Implementasi inventori, List yang isinya inventori player, berisi FarmProduct dan SideProduct, Ukuran default = 20
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
        /**
         * \brief Mereturn jumlah air yang dimiliki Player
         */
        int GetWater(); ///Getter water
        /**
         * \brief Mereturn jumlah uang yang dimiliki Player
         */
        int GetMoney(); ///Getter money
        /**
         * \brief Mereturn jumlah posisi Player
         */
        Point GetPos(); ///Getter posisi
        /**
         * \brief Mengubah jumlah air yang dimiliki Player
         * \param _water Banyaknya jumlah air
         */
        void SetWater(int _water);  ///setter water
        /**
         * \brief Mengubah jumlah uang yang dimiliki Player
         * \param _money Banyaknya jumlah uang
         */
        void SetMoney(int _money);  ///setter money
        /**
         * \brief Mengubah posisi dari Player
         * \param pos Posisi baru Player
         */
        void SetPos(Point pos);     ///setter posisi
        /**
         * \brief Mereturn sebuah pointer ke obje Player sekarang
         */
        static Player* GetInstance(){return player_instance;}

        //METHOD
        /**
         * \brief Player menyembelih Animal, lalu mendapat FarmProduct berupa Meat dari Animal yang disembelih
         * dan dimasukkan ke list inventori
         * \note Hanya dapat digunakan ke MeatProducingAnimal
         */
        void Kill(Animal* animalia);
        /**
         * \brief Menambah barang ke inventori player
         * \param _p refrence dari pointer ke product yang akan ditambahkan
         */
        void AddInventory(Product* _p);
        /**
         * \brief Mendapatkan refrence ke barang no sekian dari player
         * \param idx Indeks barang di tas
         */
        Product* GetInventory(int idx);
        /**
         * \brief Mencari product di tas
         * \param productName Nama produk yang ingin dicari
         */
        int SearchInventory(string productName);
        /**
         * \brief Menghapus barang di tas
         * \param idx Indeks barang di tas
         */
        void DelInventory(int idx);
        /**
         * \brief Getter tas
         */
        LinkedList<Product*>* getTas();
        /**
         * \brief Menghapus semua barang di dalam tas tas
         */
        void RemoveTas();
        /**
         * \brief Getter tas
         */
        void MakeTas();
};
#endif