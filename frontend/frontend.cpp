#include "frontend.h"
#include <stdlib.h>
#include <ncurses.h>
#include <iostream>

using namespace std;

Tampilan::Tampilan(){
	row = 0;
	col = 0;
	coorx = 0;
	coory = 0;
	currentWindow = stdscr;
}

Tampilan::Tampilan(int _row, int _col, int _coorx, int _coory, WINDOW *curwin){
	row = _row;
	col = _col;
	coorx = _coorx;
	coory = _coory;
	currentWindow = curwin;
}

	void Tampilan::setrow(int i){
		row = i;
	}
	void Tampilan::setcol(int i){
		col = i;
	}
	void Tampilan::setx(int i){
		coorx = i;
	}
	void Tampilan::sety(int i){
		coory = i;
	}
	int Tampilan::getrow(){
		return(row);
	}
	int Tampilan::getcol(){
		return(col);
	}
	int Tampilan::gety(){
		return(coorx);
	}
	int Tampilan::getx(){
		return(coory);
	}

void Tampilan::drawkotak(){
	int y1 = coory;
	int y2 = row + coory;
	int x1 = coorx;
	int x2 = col + coorx;
	mvwhline(currentWindow, y1, x1, 0, x2 - x1);
    mvwhline(currentWindow, y2, x1, 0, x2 - x1);
    mvwvline(currentWindow, y1, x1, 0, y2 - y1);
    mvwvline(currentWindow, y1, x2, 0, y2 - y1);
    mvwaddch(currentWindow, y1, x1, ACS_ULCORNER);
    mvwaddch(currentWindow, y2, x1, ACS_LLCORNER);
    mvwaddch(currentWindow, y1, x2, ACS_URCORNER);
    mvwaddch(currentWindow, y2, x2, ACS_LRCORNER);
}

void Tampilan::drawtable(int nBaris, int nKolom){
	drawkotak();
	int y1 = coory;
	int y2 = row + coory;
	int x1 = coorx;
	int x2 = col + coorx;
	for (int i = y1+1; i < y2; ++i)
	{
		if (i % 2 == 1)
		{
			mvwhline(currentWindow, i, x1+1, 0, x2-x1-1);
		}
	}
	for (int i = x1+1; i < x2; ++i)
	{
		if (i % 3 == 1)
		{
			mvwvline(currentWindow, y1+1, i-1, 0, y2 - y1-1);
			
		}
	}
	for (int i = y1+1; i < y2; ++i)
	{
		for (int j = x1+1; j < x2; ++j)
		{
			if ((i % 2 == 1) && (j % 3 ==0))
			{
				mvwaddch(currentWindow, i, j, '+');		
			}
		}
	}
	refresh();
}

void Tampilan::setcharonpos(char ch, int x, int y){
	//wclear(currentWindow);
	mvwaddch(currentWindow, y, x, ch);
	refresh();
}

void Tampilan::deletecharonpos(int x, int y){
	//wclear(currentWindow);
	mvwdelch(currentWindow, y, x);
	refresh();
}


void Tampilan::printstronpos(char* str, int x, int y){
	//wclear(currentWindow);
	mvwprintw(currentWindow, y, x, str);
	refresh();
}
