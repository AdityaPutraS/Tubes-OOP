/**
 * \class Product
 * \brief Product adalah base class dari segala FarmProduct dan SideProduct
 *  
 *  Product memiliki atribut harga yang akan dipakai ketika produk dijual
 * \author Naufal Aditya D.
 * 
 */
#include <iostream>
using namespace std;

#ifndef PRODUCT_H
#define PRODUCT_H

class Product{
    protected:
    int price;

    public:
    /**
     * \brief Constructor Product default
     */
    Product();
    /**
     * \brief Constructor Product dengan parameter harga Product
     * \param _price Harga Product
     */
    Product(int _price);
    /**
     * \brief prosedur sell Product untuk menjual suatu produk
     * menambah uang player sejumlah price*jumlah dan mendestruk produk
     * \param _price Harga Product
     */    
    void sell();
    /**
     * \brief getter price
     */
    int getPrice() const;
        //return price
    /**
     * \brief setter price
     * \param _price harga produk
     */
    void setPrice(int _price);
};

#endif