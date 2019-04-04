#include "Frontend/frontend.h"
#include <stdlib.h>
#include <ncurses.h>
#include <iostream>

using namespace std;

Tampilan* Tampilan::tampilan_instance = new Tampilan(30,40,0,0);

// Tampilan::Tampilan(){
// 	row = 0;
// 	col = 0;
// 	coorx = 0;
// 	coory = 0;
// 	currentWindow = stdscr;
// }

Tampilan::Tampilan(int _row, int _col, int _coorx, int _coory){
	row = _row;
	col = _col;
	coorx = _coorx;
	coory = _coory;
	initscr();
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

void Tampilan::drawkotak(int initx, int inity, int width, int height){
	int y1 = inity;
	int y2 = height + inity;
	int x1 = initx;
	int x2 = width + initx;
	mvhline(y1, x1, 0, x2 - x1);
    mvvline(y1, x1, 0, y2 - y1);
    mvvline(y1, x2, 0, y2 - y1);
    mvhline(y2, x1, 0, x2 - x1);
    mvaddch(y1, x1, ACS_ULCORNER);
    mvaddch(y2, x1, ACS_LLCORNER);
    mvaddch(y1, x2, ACS_URCORNER);
    mvaddch(y2, x2, ACS_LRCORNER);
}

void Tampilan::drawtable(int initx, int inity, int dx, int dy, int nKolom, int nBaris){
	for (int i = initx; i < initx+dx*nKolom; i += dx)
	{
		for (int j = inity; j < inity+dy*nBaris; j += dy)
		{		
			drawkotak(i, j, dx, dy);
			if(j == inity && !(i == initx || i == initx+dx*nKolom)){
				mvaddch(j, i, ACS_TTEE);
			}else{
				if (i == initx && !(j == inity || j == inity + dy*nBaris))
				{
					mvaddch(j, i, ACS_LTEE);
				}else{
					if (i == initx + dx*nKolom && !(j == inity || j == inity+dy*nBaris))
					{
						mvaddch(j, i + dx , ACS_RTEE);
					}else{
						if((j == (inity + dy*nBaris)) && (i != initx)){
							mvaddch(j+ dy, i, ACS_BTEE);	
						}else{
							if(i != initx && j != inity + dy*nBaris){
								mvaddch(j, i , ACS_PLUS);
							}
						}
					}
				}
			}
		}
	}
	for (int i = initx + dx; i < initx+dx*nKolom; i += dx*nKolom/nKolom)
	{
		mvaddch(inity + dy*nBaris, i, ACS_BTEE);
	}
	for (int j = inity + dy ; j < inity+dy*nBaris; j += dy*nBaris/nBaris)
	{
		mvaddch(j, initx + dx*nKolom, ACS_RTEE);
	}
	//int y1 = inity;
	//int y2 = height + inity;
	//int x1 = initx;
	//int x2 = width + initx;
	
	//refresh();
}

void Tampilan::setcharonpos(char ch, int x, int y){
	//wclear(currentWindow);
	mvaddch(y, x, ch);
	//refresh();
}

void Tampilan::setCharTable(char ch, int x, int y, int dx, int dy, int i, int j)
{
	int posX = x + dx*i + (int)dx/2;
	int posY = y + dy*j + (int)dy/2;
	mvaddch(posY, posX, ch);
}

void Tampilan::printStringTable(string s, int x, int y, int dx, int dy, int i, int j)
{
	int posX = x + dx*i + 1;
	int posY = y + dy*j + 1;
	mvprintw(posY, posX, s.c_str());
}

void Tampilan::deletecharonpos(int x, int y){
	//wclear(currentWindow);
	mvdelch(y, x);
	//refresh();
}


void Tampilan::printstronpos(string s, int x, int y){
	//wclear(currentWindow);
	mvprintw(y, x, s.c_str());
	//refresh();
}