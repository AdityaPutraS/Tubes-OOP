#include "include/Renderable.h"

void Renderable::render()
{
    Tampilan::GetInstance()->setcharonpos(charRepresentasi,xLayar,yLayar);
}