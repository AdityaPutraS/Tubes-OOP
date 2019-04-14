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

class MilkProducingAnimal : public virtual Animal
{
public:
  //CTOR
  /** 
  * \brief Konstruktor berparameter MilkProducingAnimal 
  * \param _x adalah posisi x dari MilkProducingAnimal 
  * \param _y adalah posisi y dari MilkProducingAnimal 
  * \param _animalSound adalah string yang berisi suara yang dikeluarkan MilkProducingAnimal 
  * \param _repChar adalah karakter yang akan dipakai untuk mencetak di game utama
  * \param _maxHunger adalah berapa lama sampai hewan harus makan lagi
  */
  MilkProducingAnimal(int _x, int _y, string _animalSound, char _repChar, int maxHunger); //init haveMilk = false

  virtual void Die(){};

  virtual void Interact(){};
  /** 
   * \brief Meng-overwrite fungsi generik isMilkPA
   * sehingga jika kelas MilkProducingAnimal memanggil isMilkPA
   * akan mereturn true, tapi kalau kelas lain yang manggil
   * akan mereturn false
   */
  bool isMilkPA() const { return true; }
  /**
   * \brief Prosedur agar hewan dapat bergerak secara acak
   */
  bool MoveRandom();
};
#endif