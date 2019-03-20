#include <iostream>
using namespace std;

#ifndef PRODUCT_H
#define PRODUCT_H

class Product{
    protected:
    int price;

    public:
    Product();
        //ctor
    Product(int _price);
        //ctor parameter
    ~Product();
        //dtor, kalo disell
    void sell();
        //nambah uang player sejumlah price
        //dtor Product yang sekarang
    int getPrice() const;
        //return price
    void setPrice(int _price);
        //price = _price
};

#endif