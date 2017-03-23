#ifndef ONITURN_H
#define ONITURN_H

#include "card.h"
#include <iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

struct piece2 { int x; int y; };

class oniturn 
{
private:
	piece2 PieceChoice;
	int choice;
	Card* card;
	bool used;
	double points;
	double numberpieces1;
	piece2 s1p[5];
	double numberpieces2;
	piece2 s2p[5];
	Card* cards1[2];
	Card* cards2[2];
	Card* cardn;
	int turns;
	oniturn* T[40];
public:
	oniturn();
	oniturn(int[5][2], int[5][2], Card*[5]);
	oniturn(const oniturn&);
	void flipp();
	void operator=(const oniturn&);
	void operator+=(const oniturn&);
	bool operator!=(oniturn&);
	double turns1(int, int);
	double turns2(int, int);
	void VI(oniturn &oni, bool isplayer1, int n);
	void oniturndelete(oniturn &oni);
	void onitreedelete();
	double tree(int, int);
	void turncard(const bool &s1, const int &n)
	{
		Card* c = cardn;
		if (s1)
		{
			cardn = cards1[n]; 
			cards1[n] = c; 
		} 
		else
		{ 
			cardn = cards2[n]; 
			cards2[n] = c; 
		} 
	};
	void setinfoturn(piece2 a, int b, Card* c){ PieceChoice = a; choice = b; card = c; }
	void setinfoused(bool x){ used = x; };
	void setpoints(double x){ points = x; }
	int getpieces1x(const int &x) { return s1p[x].x; }
	int getpieces2x(const int &x) { return s2p[x].x; }
	int getpieces1y(const int &x) { return s1p[x].y; }
	int getpieces2y(const int &x) { return s2p[x].y; }
	double getnumberpieces1(){ return numberpieces1; }
	double getnumberpieces2(){ return numberpieces2; }

	void ausgabeoni();
	//schnittstelle;

};
#endif//ONITURN_H