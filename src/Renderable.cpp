#include "Renderable.h"

void Renderable::render()
{
    Tampilan::GetInstance()->setCharTable(charRepresentasi,0,0,4,2,xLayar,yLayar);
}

void Renderable::setPosLayar(int x, int y)
{
    xLayar = x;
    yLayar = y;
}