#include "Cell/Barn.h"

//CTOR
Barn::Barn(bool hasGrass = false) : Land(Point(-1, -1), 'x', hasGrass){
    if (hasGrass){
        this->setRenderChar('@');
    }
}


//method
bool Barn::isBarn() const{
    return true;
}

//method 
void Barn::setGrass(bool hasGrass){
    this->grass = hasGrass;
    if (hasGrass){
        this->setRenderChar('@');
    }
}