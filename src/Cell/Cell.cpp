#include "Cell/Cell.h"

Cell::Cell(Point _pos, char _renderChar): Renderable(_pos.getAbsis(), _pos.getOrdinat(), 0, _renderChar)
{
    pos = _pos;
}

Point Cell::getPoint() const
{
    return pos;
}

void Cell::setPos(Point _pos)
{
    pos = _pos;
}

bool Cell::isBarn() const{
    return false;
}

bool Cell::isCoop() const{
    return false;
}

bool Cell::isGrassland() const{
    return false;
}

bool Cell::isMixer() const{
    return false;
}

bool Cell::isTruck() const{
    return false;
}

bool Cell::isWell() const{
    return false;
}