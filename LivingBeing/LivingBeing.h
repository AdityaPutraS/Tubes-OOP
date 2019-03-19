#ifndef _LIVINGBEING_H
#define _LIVINGBEING_H

/*
* CATATAN
* 
*/

#include <iostream>
using namespace std;

class LivingBeing {
    protected:
        int x;
        int y;
        enum direction = {up, down, left, right}; //up 1, down 2, left 3, right 4
    public:
        //CTOR
        MakhlukHidup(int _x, int _y);   //Konstruk dengan parametered location
        
        //GETTER
        int GetX();     
        int GetY();
        
        //SETTER
        void SetX(int _x);
        void SetY(int _y);
        
        //METHOD
        void Move(int directionNumber);
        void MoveRandom();  //untuk animal
};
#endif