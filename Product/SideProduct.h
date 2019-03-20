#include <iostream>
#include "Product.h"
#include "FarmProduct.h"
#include "LinkedList.h"
using namespace std;

#ifndef SIDEPRODUCT_H
#define SIDEPRODUCT_H

class SideProduct: public Product{
    private:
    LinkedList<FarmProduct> ingredients;
    public:
    SideProduct(int _price);
    SideProduct(const SideProduct&);
    SideProduct& operator= (const SideProduct&);
    ~SideProduct();
    void addIngridients(FarmProduct _ingredients);
    void showIngridients();
};
//bakal ada min. 3 class
//nama : BeefRolade(daging + telur), STMJ(Susu + telur), 


#endif