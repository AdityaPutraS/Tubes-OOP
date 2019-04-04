#include "Cell/Truck.h"

Truck::Truck(Point pos):Facility(pos, 'T'){}

void Truck::interact(){

}

bool Truck::isTruck() const {
    return true;
}