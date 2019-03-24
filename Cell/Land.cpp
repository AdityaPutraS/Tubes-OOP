#include "Land.h"

//ctor
Land::Land(Point _pos, bool _grass = false, char _renderChar) : Cell(_pos, _renderChar){
    grass = _grass;
}

//method
bool Land::hasGrass() const{
    return grass;
}

void Land::growGrass(){
    grass = true;
}

bool Land::isBarn() const{
    return false;
}
bool Land::isCoop() const{
    return false;
}

bool Land::isGrassand() const{
    return false;
}


