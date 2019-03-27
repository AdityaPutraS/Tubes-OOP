/**
 * \class Cell
 * \brief Cell adalah Base class untuk Land dan Facility
 *
 * \author M. Khairul Makirin
 * 
 */

#ifndef _CELL_H
#define _CELL_H

#include "include/Renderable.h"
#include "Point.h"

#define cellpointer Cell*

class Cell : public Renderable{
    private:
        Point pos;
        char renderChar;

    public:
        /**
         * \brief Default constructor Cell, position -1,-1, tapi di render di 0,0 dengan char '-'
         */
        Cell():pos(Point(-1,-1)), renderChar('-'), Renderable(0,0,0,'-'){}
        /**
         * \param _pos posisi cell yang ingin dibentuk
         * \param _renderChar karakter yang akan di print saat rendering
         */
        Cell(Point _pos, char _renderChar);

        /**
         * \brief return posisi cell berada sebagai point
         */
        Point getPoint() const;

        /**
         * \param _pos posisi cell baru
         */
        void setPos(Point _pos);
};

#endif