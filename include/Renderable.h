/**
 * \class Renderable
 * \brief Class sebagai base semua class yang bisa di render
 * 
 * Class ini dibuat dengan tujuan mengabstraksi sistem render semua objek dengan
 * memanggil class tampilan dan mengeprint charRepresentasi di posisi xLayar, yLayar
 * 
 * 
 * \author Aditya Putra Santosa
 * 
 */

#ifndef RENDERABLE_H
#define RENDERABLE_H

#include "frontend.h"

class Renderable
{
  private:
    /**
         * \brief nilai x atas kiri layar
         */
    int xLayar;
    /**
         * \brief nilai y atas kiri layar
         */
    int yLayar;
    /**
         * \brief warna char yang akan di print
         */
    int color;
    /**
         * \brief char yang akan di print di layar
         */
    char charRepresentasi;

  public:
    /**
         * \brief Constructor renderable
         * \param _x posisi x objek
         * \param _y posisi y objek
         * \param _color warna karakter
         * \param _char karakter yang akan diprint di layar
         */
    Renderable(int _x, int _y, int _color, char _char) : xLayar(_x), yLayar(_y), color(_color), charRepresentasi(_char) {}
    /**
         * \brief Merender objek ke layar dengan mengeprint charRepresentasi di posisi
         * xLayar, yLayar. Memanggil instance tampilan untuk mengeprint
         */
    void render();

     /**
      * \brief Mengembalikan char yang akan dirender
      */
    char getRenderChar(){return charRepresentasi;}
    void setRenderChar(char _renderChar){charRepresentasi = _renderChar;}
};

#endif