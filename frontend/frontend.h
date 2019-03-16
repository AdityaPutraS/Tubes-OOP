#ifndef FREND
#define FREND

#include <ncurses.h>
#include <iostream>
#include <stdlib.h>

/*
INISIASI KELAS INI DENGAN MENAMBAHKAN 
initscr();
PADA AWAL MAIN PROGRAM
DAN 
endwin();
PADA AKHIR MAIN PROGRAM
*/
class Tampilan{
private:
	//tipe window//
	WINDOW *currentWindow;

	//jumlah row & collumn//
	int row, col;

	//koordinat awal window//
	int coorx, coory;

public:
	//default ctor
	Tampilan();

	//ctor parameter
	//_row dan _col kelipatan 3
	Tampilan(int _row, int _col, int _coorx, int _coory, WINDOW *curwin);

	//GETTER & SETTER//
	void setrow(int i);
	void setcol(int i);
	void setx(int i);
	void sety(int i);
	int getrow();
	int getcol();
	int gety();
	int getx();

	//METHOD MISC//
	
	void drawkotak();
	void drawtable();
	void setcharonpos(char ch, int x, int y);
	void deletecharonpos(int x, int y);
	void printstronpos(char* str, int x, int y);

};


#endif 