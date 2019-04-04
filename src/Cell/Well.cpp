#include "Cell/Well.h"

Well::Well(Point pos) : Facility(pos, 'W'){}


void Well::interact(){

}

bool Well::isWell() const{
    return true;
}
