/**
 * \class LivingBeing
 * \brief LivingBeing adalah base class dari segala mahluk di game
 *
 * \author Ahmad Rizal Alifio
 * 
 */

#ifndef _LIVINGBEING_H
#define _LIVINGBEING_H

#include <iostream>
#include "Renderable.h"
using namespace std;

class LivingBeing : public Renderable {
    protected:
        int x;  ///< posisi X dari mahluk hidup
        int y;  ///< posisi Y dari mahluk hidup
    public:
        /**
         * direction adalah tipe enum dengan nilai
         * up = 1
         * down = 2
         * left = 3
         * right = 4
         */
        enum direction {up = 1, down, left, right}; 
        /**
         * \brief Default constructor mahluk hidup, diletakan di -1,-1, tapi di render di 0,0 dengan char '-'
         */
        LivingBeing():x(-1),y(-1),Renderable(0,0,0,'-'){}
        /**
         * \brief Constructor Mahluk hidup dengan parameter posisi dan karakter representasinya di layar
         * \param _x posisi X mahluk hidup
         * \param _y posisi Y mahluk hidup
         * \param _repChar Karakter yang akan di print di layar untuk merepresentasikan mahluk hidup ini 
         */
        LivingBeing(int _x, int _y, char _repChar);   //Konstruk dengan parametered location
        
        ///Getter x
        int GetX() const;
        ///Getter y     
        int GetY() const;
        
        ///Setter x
        void SetX(int _x);
        ///Setter y
        void SetY(int _y);
        
        /**
         * \brief Bergerak ke arah directionNumber sejauh 1 petak, return true jika berhasil, false
         * jika gagal
         * \param directionNumber nomor arah sesuai tipe enum direction
         */
        bool Move(direction directionNumber);
        /**
         * \brief Bergerak acak ke salah satu dari 4 arah yang ada sebanyak 1 petak,
         *      digunakan untuk animal
         */
        void MoveRandom();
        
};
#endif