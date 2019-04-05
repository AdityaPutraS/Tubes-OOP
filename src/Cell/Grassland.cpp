#include "Cell/Grassland.h"

Grassland::Grassland(bool hasGrass = false) : Land(Point(-1,-1),'-', hasGrass){
    if (hasGrass){
        this->setRenderChar('#');
    }
}

bool Grassland::isGrassland() const{
    return true;
}

void Grassland::setGrass(bool hasGrass){
    this->grass = hasGrass;
    if (hasGrass){
        this->setRenderChar('#');
    }
}