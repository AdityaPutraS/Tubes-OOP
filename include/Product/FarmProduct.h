/**
 * \class FarmProduct
 * \brief FarmProduct adalah base class dari segala FarmProduct (produk dari hewan) di game
 *  
 *  Harga FarmProduct ditentukan secara manual
 * \note ada minimal 6 FarmProduct
 * \author Naufal Aditya D.
 * 
 */
#include <iostream>
#include "Product.h"
using namespace std;

#ifndef FARMPRODUCT_H
#define FARMPRODUCT_H

class FarmProduct : public Product
{
  public:
    FarmProduct(string name);

    FarmProduct(int _price, string name);
};

#endif