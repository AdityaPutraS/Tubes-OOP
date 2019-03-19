#ifndef RENDERABLE_H
#define RENDERABLE_H

#include "frontend/frontend.h"

class Renderable
{
    private:
        int xLayar, yLayar;
        int color;
        char charRepresentasi;
    public:
        //Menaruh charRepresentasi di posisi (xLayar, yLayar) dengan warna color
        Renderable(int _x, int _y, int _c, int _char);
        void render();
};

#endif