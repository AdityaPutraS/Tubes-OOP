#ifndef _BARN_H
#define _BARN_H

#include "Land.h"
#include "Animal.h"

class Barn : public Land{
    private:
        char renderChar;

    public:
        //ctor berparameter
        Barn(point<int>);

        //Merender renderChar jika tidak ada Grass (@)
        void render() const;

        bool isBarn() const{return true;}
};

#endif