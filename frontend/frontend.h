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
 * 		Tambahkan juga initscr() pada awal main program
 * 		dan endwin() pada akhir program
 * 
 * \author Rayza Mahendra
 * 
 */
#ifndef FREND_H
#define FREND_H

#include <ncurses.h>
#include <iostream>
#include <stdlib.h>

class Tampilan{
private:
	/// Objek WINDOW untuk menggambar char pada layar
	WINDOW *currentWindow;

	int row;	///< Baris maksimal WINDOW
	int col;	///< Kolom maksimal WINDOW

	int coorx;	///< Nilai X atas kiri WINDOW
	int coory;	///< Nilai Y atas kiri WINDOW

public:
	/// Default Constructor
	Tampilan();

	/**
	 * \brief Constructor dengan parameter
	 * \param _row menandakan baris maksimal WINDOW, merupakan kelipatan 3
	 * \param _col menandakan kolom maksimal WINDOW, merupakan kelipatan 3
	 * \param _coorx menandakan nilai X pojok kiri atas WINDOW
	 * \param _coory menandakan nilai Y pojok kiri atas WINDOW
	 * \param curwin menandakan WINDOW yang digunakkan untuk menggambar char
	 */
	Tampilan(int _row, int _col, int _coorx, int _coory, WINDOW *curwin);

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
	void drawkotak();
	/**
	 * \brief Method untuk menggambar tabel (nBaris x nKolom) 
	 * 		yang memenuhi WINDOWS
	 * \param nBaris menandakan banyak baris tabel
	 * \param nKolom menandakan banyak kolom tabel
	 */
	void drawtable(int nBaris, int nKolom);
	//Mengubah char pada posisi (x,y) menjadi ch
	void setcharonpos(char ch, int x, int y);
	//Menghapus char pada posisi (x,y), menjadikannya kosong
	void deletecharonpos(int x, int y);
	//Mencetak string str pada posisi (x,y)
	void printstronpos(char* str, int x, int y);

};
#endif 