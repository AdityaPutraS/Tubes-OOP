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

class Product
{
  protected:
    int price;
    string name;

  public:
    /**
     * \brief Constructor Product default
     * \param _name Nama dari produk yang ingin dibuat
     */
    Product(string _name);
    /**
     * \brief Constructor Product dengan parameter harga Product dan namanya
     * \param _price Harga Product
     * \param _name Nama Product
     */
    Product(int _price, string _name);
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
    /**
     * \brief getter name
     */
    string getName() const;
    //return price
    /**
     * \brief setter name
     * \param _name nama produk
     */
    void setName(string _name);

    bool operator==(const Product& P) const;

};

#endif