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

#ifndef SIDEPRODUCT_H
#define SIDEPRODUCT_H

#include <iostream>
#include "Product.h"
#include "FarmProduct.h"
#include <vector>

using namespace std;

class SideProduct: public Product{
    protected:
        vector<FarmProduct> ingredients;    ///< Sebuah list untuk mencatat bahan dasar yang dibutuhkan untuk SideProduct
    public:
        /**
         * \brief Constructor SideProduct default
         */
        SideProduct(string _type);
        /**
         * \brief Constructor SideProduct dengan parameter harga SideProduct
         * \param _price Harga SideProduct
         */
        SideProduct(int _price, string _type);    
        /**
         * \brief Copy Constructor SideProduct dari SideProduct yang sudah ada
         * \param SideProduct& SideProduct lain
         */
        SideProduct(SideProduct&);
        /**
         * \brief Operator = untuk meng-assign isi SideProduct dengan SideProduct lain
         * \param SideProduct& SideProduct lain
         */
        SideProduct& operator= (SideProduct&);
        /**
         * \brief Destruktor SideProduct
         */
        ~SideProduct();
        /**
         * \brief showIngredients menampilkan bahan bahan yang dibutuhkan untuk mix menjadi SideProduct
         */
        void showIngredients();
        /**
         * \brief setter Ingredient untuk meng-assign ingredient yang digunakan dalam sebuah SideProduct
         */
        void setIngredients(vector<FarmProduct>);
        /**
         * \brief addIngredient untuk menambahkan sebuah FarmProduct ke dalam Ingredients
         */
        void addIngredients(FarmProduct FP);
        /**
         * \brief getter Ingredient
         */
        vector<FarmProduct>& getIngredients();
        /**
         * \brief getter Type
         */
        string getType();
        /**
         * \brief cek apakah side product bisa dibuat dengan bahan sesuai parameter
         */
        bool canMake(vector<Product>& bahan);
};

#endif
