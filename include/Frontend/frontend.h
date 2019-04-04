/**
 * \class Tampilan
 * \brief Class sebagai abstraksi dari ncurses
 * 
 * Class ini dibuat dengan tujuan memudahkan interaksi antara
 * programmer dan library ncurses. Beberapa method yang dibbuat
 * di class ini merupakan gabungan/abstraksi dari beberapa method
 * biasa ncurses.
 * 
 * \note Jangan lupa tambahkan -lncurses saat compile
 * 
 * \author Rayza Mahendra
 * 
 */
#ifndef FREND_H
#define FREND_H

#include <ncurses.h>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Tampilan
{
  private:
	int row; ///< Baris maksimal WINDOW
	int col; ///< Kolom maksimal WINDOW

	int coorx; ///< Nilai X atas kiri WINDOW
	int coory; ///< Nilai Y atas kiri WINDOW
	/**
	 * \brief Singleton pattern, instance tampilan yang bisa dipanggil di mana saja
	 */
	static Tampilan *tampilan_instance;
	/**
	 * \brief Constructor dengan parameter, memanggil initscr()
	 * \param _row menandakan baris maksimal WINDOW
	 * \param _col menandakan kolom maksimal WINDOW
	 * \param _coorx menandakan nilai X pojok kiri atas WINDOW
	 * \param _coory menandakan nilai Y pojok kiri atas WINDOW
	 * \param curwin menandakan WINDOW yang digunakkan untuk menggambar char
	 */
	Tampilan(int _row, int _col, int _coorx, int _coory);

  public:
	/**
	 * \brief Destructor tampilan, mendelete pointer currentWindow dan memanggil endWin()
	 */
	~Tampilan();
	/// Setter row
	void setrow(int i);
	/// Setter col
	void setcol(int i);
	/// Setter coorx
	void setx(int i);
	/// Setter coory
	void sety(int i);
	/// Getter row
	int getrow();
	/// Getter col
	int getcol();
	/// Getter coorx
	int gety();
	/// Getter coory
	int getx();

	//Method untuk menggambar kotak border terluar window
	void drawkotak(int initx, int inity, int width, int height);
	/**
	 * \brief Method untuk menggambar tabel (nBaris x nKolom) 
	 * 		yang memenuhi WINDOWS
	 * \param nBaris menandakan banyak baris tabel
	 * \param nKolom menandakan banyak kolom tabel
	 */
	void drawtable(int initx, int inity, int dx, int dy, int nKolom, int nBaris);
	//Mengubah char pada posisi (x,y) menjadi ch
	void setcharonpos(char ch, int x, int y);
	//Mengubah char pada posisi (i,j) pada table
	string readStringTable(int x, int y, int dx, int dy, int i, int j);
	void setCharTable(char ch, int x, int y, int dx, int dy, int i, int j);
	void printStringTable(string s, int x, int y, int dx, int dy, int i, int j);
	//Menghapus char pada posisi (x,y), menjadikannya kosong
	void deletecharonpos(int x, int y);
	//Mencetak string str pada posisi (x,y)
	void printstronpos(string s, int x, int y);
	/**
	 * \brief mengupdate isi layar
	 */
	void updateLayar() { refresh(); }
	/**
	 * \brief Singleton pattern, mengembalikan objek instance tampilan
	 */
	static Tampilan *GetInstance(){return tampilan_instance;}
};
#endif