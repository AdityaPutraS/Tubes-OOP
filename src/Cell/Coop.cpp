#include "Cell/Coop.h"

//CTOR
Coop::Coop(bool hasGrass = false) : Land(Point(-1, -1), 'o', hasGrass){
    if (hasGrass){
        this->setRenderChar('*');
    }
}


//method
bool Coop::isCoop() const{
    return true;
}

//method
void Coop::setGrass(bool hasGrass){
    this->grass = hasGrass;
    if (hasGrass){
        this->setRenderChar('*');
    }
}