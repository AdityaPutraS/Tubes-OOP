#include <iostream>
using namespace std;

#ifndef PRODUCT_H
#define PRODUCT_H

class Product{
    private:
    string name;
    int price;

    public:
    //ctor
    Product(string _name, int _price);
    //nambah duit player
    //ngurangin jumlah(?)
    virtual void Sell() = 0;
    //
    virtual string getName() const = 0;
    virtual int getPrice() const;
    virtual void setName(string _name);
    virtual void setPrice(int _price);
};

class FarmProduct: public Product{
    //bakal ada min. 6 jenis
    //nama : Daging, Telur, Susu
    private:
    public:
    FarmProduct(string _name, int _price);

};

class SideProduct: public Product{
    //bakal ada min. 3 Jenis
    //nama : BeefRolade(daging + telur), STMJ(Susu + telur), 
    private:
    string* bahan;
    public:
    SideProduct(string _name, int _price);
    SideProduct(const SideProduct&);
    SideProduct& operator= (const SideProduct&);
    ~SideProduct();
};

//inventory pake generic class aja lah ya


#endif