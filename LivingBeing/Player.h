#ifndef _PLAYER_H
#define _PLAYER_H

/*/class Player
* /brief class yang mengontrol aksi player
* 
* Class ini dibuat dengan tujuan untuk meimplementasikan aksi yang dapat
* dilakukan player dalam game dan interaksi antara player dengan objek 
* dalam game
*
* /author Ahmad Rizal Alifio
*/

#include <iostream>
#include "LivingBeing.h"
#include "Generik.h"
#include "../Product.h"
#include "Animal.h"
#include "../Facility.h"

using namespace std;

class Player: public LivingBeing {
    private:
        int water;  ///Jumlah air yang dibawa Player
        int money;  ///Jumlah uang yang dibawa Player
        
        LinkedList<Product> tas; //isi tas player/ inventori (Ukuran default = 20)
    public:
        //CTOR
        Player();   //Konstruk player dengan predefined location, water, and money, dan tas ukuran default
        
        //CTOR berparameter
        //brief Konstruk player dengan parameter x, y water and money, dan tas ukuran default
        /*
        * \param _x menandakan posisi absis player
        * \param _y menandakan posisi ordinat player
        * \param _water menandakan jumlah awal water
        * \param _money menandakan jumlah awal money
        */

        Player(int _x, int _y, int _water, int _money); 

        //GETTER
        int GetWater(); //return water
        int GetMoney(); //return money
        
        //SETTER
        void SetWater(int _water);  //set water
        void SetMoney(int _money);  //set money
    
        //METHOD
        /*
        * dokumentasi dibawah memaparkan arti kata "sekitar" di method-method dibawah ini
        * sekitar player berarti 4 kotak disebelah atas bawah kanan dan kiri player dengan
        * player = (x, y)
        * kanan = (x + 1, y)
        * kiri = (x - 1, y)
        * atas = (x, y + 1)
        * bawah = (x, y - 1)
        */
        void TalkWith();
            // brief Cek hewan apa yang ada di sekitar lalu bunyikan suaranya
        void InteractWith(Animal& animalia);
            // brief Cek sekitar player lalu ambil milk atau egg
        void InteractWith(Facility& facilitia);
            // brief cek sekitar player lalu interaksi dengan fasilitas peternakan
        void Kill();
            // brief Cek sekitar player lalu sembelih MeatProducingAnimal disekitar player,
            //Tambahkan meat sejumlah MeatProducingAnimal yang diKill()
        void Grow();
            // brief Menumbuhkan rumput di petak player (x, y)
};
#endif