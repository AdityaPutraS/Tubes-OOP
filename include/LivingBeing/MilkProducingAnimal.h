#ifndef _MILKPRODUCINGANIMAL_H
#define _MILKPRODUCINGANIMAL_H
/** 
* \class MilkProducingAnimal 
* \brief class MilkProducingAnimal adalah tipe Animal dalam game yang menghasilkan Milk
* 
* MilkProducingAnimal menghasilkan milk jika dilakukan method InterractWith()  
* oleh player yang berada di sekitar MilkProducingAnimal 
* 
*\author Ahmad Rizal Alifio 
*/ 


#include <iostream>
#include "Animal.h"
using namespace std;

class MilkProducingAnimal : public Animal {
    protected:
        bool haveMilk; /// atribut MilkProducingAnimal, bernilai true jika memiliki Milk 
    public:
        //CTOR
        /** 
        * \brief Konstruktor berparameter MilkProducingAnimal 
        * \param _x adalah posisi x dari MilkProducingAnimal 
        * \param _y adalah posisi y dari MilkProducingAnimal 
        * \param _animalSound adalah string yang berisi suara yang dikeluarkan MilkProducingAnimal 
        */ 
        MilkProducingAnimal(int _x, int _y, string _animalSound); //init haveMilk = false
        
        //METHOD
        /** 
         * \brief Menghasilkan milk ke player jika 
         * ada disekitar player yang melakukan Interaksi 
         */
        void ProduceMilk();
        /** 
         * \brief Mereturn atribut haveMilk, return True jika siap memproduksi milk, False jika tidak 
         */
        bool IsHaveMilk();
};
#endif