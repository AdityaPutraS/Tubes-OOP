#ifndef _COOP_H
#define _COOP_H

#include "Land.h"
#include "Animal.h"

class Coop : public Land{
    private:
        char renderChar;

    public:
        //ctor berparameter
        Coop(point<int>);

        //Merender renderChar jika tidak ada grass(*)
        void render() const;

        bool isCoop() const{return true;}

};



#endif