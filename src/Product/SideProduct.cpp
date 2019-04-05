#include "Product/SideProduct.h"
#include <iostream>
#include <algorithm>
using namespace std;

SideProduct::SideProduct(string _type) : Product(_type), ingredients()
{}

SideProduct::SideProduct(int _price, string _name) : Product(_price, _name), ingredients()
{}

SideProduct::SideProduct(SideProduct &SP) : Product(SP.getPrice(), SP.getName()), ingredients(SP.getIngredients())
{}

SideProduct &SideProduct::operator=(SideProduct &SP)
{
    ingredients = vector<FarmProduct>(SP.getIngredients());
    price = SP.getPrice();
    name = SP.getName();
    return *this;
}

SideProduct::~SideProduct()
{
}
void SideProduct::showIngredients()
{
    cout << "Ingredients :" << endl;
    for(FarmProduct fp : ingredients)
    {
        cout << "  " << fp.getName() << endl;
    }
}
void SideProduct::setIngredients(vector<FarmProduct> FP)
{
    ingredients = FP;
}
void SideProduct::addIngredients(FarmProduct FP)
{
    ingredients.push_back(FP);
}
vector<FarmProduct> &SideProduct::getIngredients()
{
    return ingredients;
}

bool SideProduct::canMake(vector<Product>& bahan)
{
    vector<int> terpakai;
    bool sukses = true;
    for(FarmProduct fp : ingredients)
    {
        bool ketemu = false;
        for(int i = 0; i < bahan.size() && !ketemu; i++)
        {
            if(fp == bahan[i])
            {
                auto iterTerpakai = find(terpakai.begin(), terpakai.end(), i);
                if(iterTerpakai == terpakai.end())
                {
                    terpakai.push_back(i);
                    ketemu = true;
                }
            }
        }
        if(!ketemu)
        {
            sukses = false;
        }
    }
    return sukses;
}