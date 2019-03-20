#ifndef _COOP_H
#define _COOP_H

#include "Land.h"
#include "Animal.h"

#define cooppointer Coop*

class Coop : public Land{
    public:
        //ctor berparameter
        Coop(Point pos, bool _grass);

        bool isCoop() const{return true;}

};



#endif