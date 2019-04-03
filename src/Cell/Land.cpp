#include "Cell/Land.h"

//ctor
Land::Land(Point _pos, char _renderChar, bool _grass) : Cell(_pos, _renderChar){
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

bool Land::isGrassland() const{
    return false;
}


