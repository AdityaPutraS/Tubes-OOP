/**
 * \class SideProduct
 * \brief SideProduct adalah base class dari segala SideProduct (produk olahan hasil mix) di game
 *  
 *  SideProduct dihasilkan saat player berinteraksi dengan Mixer dan mencampur 2 atau lebih FarmProduct
 *  Harga SideProduct ditentukan secara manual
 * \note ada minimal 3 SideProduct
 * \author Naufal Aditya D.
 * 
 */

#include <iostream>
#include "Product.h"
#include "FarmProduct.h"
#include "../Generik/LinkedList.h"

using namespace std;

#ifndef SIDEPRODUCT_H
#define SIDEPRODUCT_H

class SideProduct: public Product{
    protected:
        LinkedList<FarmProduct> ingredients;    ///< Sebuah list untuk mencatat bahan dasar yang dibutuhkan untuk SideProduct
    public:
        /**
         * \brief Constructor SideProduct default
         */
        SideProduct();
        /**
         * \brief Constructor SideProduct dengan parameter harga SideProduct
         * \param _price Harga SideProduct
         */
        SideProduct(int _price);    
        /**
         * \brief Copy Constructor SideProduct dari SideProduct yang sudah ada
         * \param SideProduct& SideProduct lain
         */
        SideProduct(const SideProduct&);
        /**
         * \brief Operator = untuk meng-assign isi SideProduct dengan SideProduct lain
         * \param SideProduct& SideProduct lain
         */
        SideProduct& operator= (const SideProduct&);
        /**
         * \brief Destruktor SideProduct
         */
        ~SideProduct();
        /**
         * \brief showIngredients menampilkan bahan bahan yang dibutuhkan untuk mix menjadi SideProduct
         */
        void showIngridients();
        /**
         * \brief setter Ingredient untuk meng-assign ingredient yang digunakan dalam sebuah SideProduct
         */
         void setIngredients(LinkedList<FarmProduct>);
};

#endif