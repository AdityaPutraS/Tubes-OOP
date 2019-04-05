#include "Cell/Land.h"

//ctor
Land::Land() : Cell(Point(-1,-1),'-'){
    grass = false;
}

Land::Land(Point _pos, char _renderChar, bool _grass) : Cell(_pos, _renderChar){
    grass = _grass;
}

//method
bool Land::hasGrass() const{
    return grass;
}

void Land::setGrass(bool hasGrass)
{
    grass = hasGrass;
}


