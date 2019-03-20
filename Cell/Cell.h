#ifndef _CELL_H
#define _CELL_H

#include "Generik.h"
#include "../Renderable.h"

#define cellpointer Cell*

class Cell : public Renderable{
    private:
        Point pos;
        char renderChar;

    public:
        //ctor
        Cell(Point _pos, char _renderChar);

        //getPoint
        Point getPoint() const;

        //setPoint
        void setPos(Point _pos);

        //set renderChar
        virtual void setRenderChar(char _renderChar);


};

#endif