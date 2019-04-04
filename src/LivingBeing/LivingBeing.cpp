#include "../../include/LivingBeing/LivingBeing.h"
#include <iostream>
#include <cstdlib>
using namespace std;

LivingBeing::LivingBeing(int _x, int _y, char _repChar) : Renderable(_x, _y, 0, _repChar){
    x = _x;
    y = _y;
}

int LivingBeing::GetX() const{
    return x;
}

int LivingBeing::GetY() const{
    return y;
}

void LivingBeing::SetX(int _x){
    x = _x;
    this->setPosLayar(x, y);
}

void LivingBeing::SetY(int _y){
    y = _y;
    this->setPosLayar(x, y);
}

void LivingBeing::Move(direction dirNumber){
    if (dirNumber == up){
        this->SetY(y-1);
    }else if (dirNumber == down){
        this->SetY(y+1);
    }else if (dirNumber == left){
        this->SetX(x-1);
    }else if (dirNumber == right){
        this->SetX(x+1);
    }else{
        cout << "[INFO] : Illegal direction number" << endl;
    }
}

void LivingBeing::MoveRandom(){
    srand(1);
    direction randDir = static_cast<direction>(rand() % 4 + 1);
    this->Move(randDir);
}

