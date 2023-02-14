#ifndef __GOTOXY_H
#define __GOTOXY_H

#ifdef _WIN32
#include<windows.h>
void gotoxy(short x, short y)
{
	COORD pos ={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}  
#endif
#ifdef linux
#include<stdlib.h>
void gotoxy(short x,short y)
{
	printf("\033[%d;%dH", y+1, x+1);
}
#endif

#endif