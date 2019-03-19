#ifndef _CELL_H
#define _CELL_H

#include "Generik.h"
#include "Renderable.h"

class Cell : public Renderable{
    private:
        Point pos;
    public:
        //ctor
        Cell(Point);

        //getPoint
        Point getPoint() const;

        //setPoint
        void setPoint(Point);


};

#endif