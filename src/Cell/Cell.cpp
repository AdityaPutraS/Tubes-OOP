#include "Cell/Cell.h"

Cell::Cell(Point _pos, char _renderChar): Renderable(_pos.getAbsis(), _pos.getOrdinat(), 0, _renderChar)
{
    pos = _pos;
    renderChar = _renderChar;
}

Point Cell::getPoint() const
{
    return pos;
}

void Cell::setPos(Point _pos)
{
    pos = _pos;
}