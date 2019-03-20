#include <iostream>
#include "SideProduct.h"
using namespace std;

#ifndef BLUEFEATHER_H
#define BLUEFEATHER_H

class BlueFeather: public SideProduct{
    //ingredients : semua
    public:
        BlueFeather(int _price);
        BlueFeather(const BlueFeather&);
        BlueFeather& operator= (const BlueFeather&);
        ~BlueFeather();
}



#endif