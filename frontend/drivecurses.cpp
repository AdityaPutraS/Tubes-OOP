#include "frontend.h"
#include <stdlib.h>
#include <ncurses.h>
#include <iostream>

using namespace std;

int main(){
	initscr();
	Tampilan P1(12, 21, 15, 15, stdscr);
	P1.drawtable();
	P1.setcharonpos('K', 5,5);
	P1.deletecharonpos(5,5);
	P1.setcharonpos('L', 6,2);
	char outp[] = "ACTUALREALLIFEPEPEGA";
	P1.printstronpos(outp, 9, 10);
	refresh();
	getch();
	endwin();
	return(0);
}