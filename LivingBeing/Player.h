#ifndef _PLAYER_H
#define _PLAYER_H

/*
* CATATAN
* 1. Sekitar = Atas, Bawah, Kiri, Kanan
*
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
        int water;  //Jumlah air yang dibawa Player
        int money;  //Jumlah uang yang dibawa Player
        //BUTUH INVENTORI (Linked List?)
        LinkedList<Product> tas; //Ukuran default = 20
    public:
        //CTOR
        Player();   //Konstruk player dengan predefined location, water, and money, dan tas ukuran default
        Player(int _x, int _y, int _water, int _money); //Konstruk player dengan parametered water and money, dan tas ukuran default

        //GETTER
        int GetWater(); //return water
        int GetMoney(); //return money
        
        //SETTER
        void SetWater(int _water);  //set water
        void SetMoney(int _money);  //set money
    
        //METHOD
        void TalkWith();
            //Cek hewan apa yang ada di sekitar lalu bunyikan suaranya
        void InteractWith(Animal& animalia);
            //Cek sekitar player lalu ambil milk atau egg
        void InteractWith(Facility& facilitia);
            //cek sekitar player lalu interaksi dengan fasilitas peternakan
        void Kill();
            //Cek sekitar player lalu sembelih jika MeatProducingAnimal, nambah meat di inventori
        void Grow();
            //Menumbuhkan rumput di petak yang sedang diinjek
};
#endif