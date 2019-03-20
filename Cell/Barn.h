#ifndef _BARN_H
#define _BARN_H

#include "Land.h"
#include "Animal.h"

#define barnpointer Barn*

class Barn : public Land{
    public:
        //ctor 
        Barn(Point pos, bool _grass);

        bool isBarn() const{return true;}
};

#endif