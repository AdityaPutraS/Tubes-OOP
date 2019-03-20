#include <iostream>
#include "SideProduct.h"
using namespace std;

#ifndef STMJ_H
#define STMJ_H

class STMJ: public SideProduct{
    public:
        STMJ(int _price);
        STMJ(const STMJ&);
        STMJ& operator= (const STMJ&);
        ~STMJ();
}



#endif