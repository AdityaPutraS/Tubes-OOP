/**
 * \class Cell
 * \brief Cell adalah Base class untuk Land dan Facility
 *
 * \author M. Khairul Makirin
 * 
 */

#ifndef _CELL_H
#define _CELL_H

#include "../Renderable.h"
#include "Point.h"

#define cellpointer Cell*

class Cell : public Renderable{
    private:
        Point pos;
        char renderChar;

    public:
        /**
         * \param _pos posisi cell yang ingin dibentuk
         * \param _renderChar karakter yang akan di print saat rendering
         */
        Cell(Point _pos, char _renderChar);

        //getPoint
        Point getPoint() const;

        /**
         * \param _pos posisi cell baru
         */
        void setPos(Point _pos);

        /**
         * \param _renderChar karakter baru untuk di render
         */
        virtual void setRenderChar(char _renderChar);


};

#endif