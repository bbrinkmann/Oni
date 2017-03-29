#include "Engine.h"


Engine::Engine(int s1[5][2], int s2[5][2], Card* c[5])
{
	numberpieces1 = 5;
	numberpieces2 = 5;
	for (int i = 0; i < 5; i++)
	{
		s1p[i].x = s1[i][0];
		s1p[i].y = s1[i][1];
		s2p[i].x = s2[i][0];
		s2p[i].y = s2[i][1];
	}
	cards1[0] = {c[0]};
	cards2[0] = { c[2] };
	cards1[1] = { c[1] };
	cards2[1] = { c[3] };
	cardn = c[4]; 
}
Engine::Engine(const Engine& o) {
	for ( int i = 0; i < 5; i++) {
		s1p[i] = o.s1p[i];
		s2p[i] = o.s2p[i];
	}
	numberpieces1 = o.numberpieces1;
	numberpieces2 = o.numberpieces2;
	cards1[0] = o.cards1[0];
	cards1[1] = o.cards1[1];
	cards2[0] = o.cards2[0];
	cards2[1] = o.cards2[1];
	cardn = o.cardn;
};
piece2 flippPiece(piece2 p)
{
	piece2 p2;
	switch (p.x){
	case -1:
		p2.x = -1;
		break;
	case 0:
		p2.x = 4;
		break;
	case 1:
		p2.x = 3;
		break;
	case 2:
		p2.x = 2;
		break;
	case 3:
		p2.x = 1;
		break;
	case 4:
		p2.x = 0;
		break;
	}
	switch (p.y){
	case -1:
		p2.y = -1;
		break;
	case 0:
		p2.y = 4;
		break;
	case 1:
		p2.y = 3;
		break;
	case 2:
		p2.y = 2;
		break;
	case 3:
		p2.y = 1;
		break;
	case 4:
		p2.y = 0;
		break;
	}
	return p2;
}
void Engine::flipp() {
	double x;
	Card* c;
	piece2 a, b;
	x = numberpieces1;
	numberpieces1 = numberpieces2;
	numberpieces2 = x;
	for (int i = 0; i < 5; i++) {
		a = (flippPiece(s1p[i]));
		b = (flippPiece(s2p[i]));
		s1p[i] = b;
		s2p[i] = a;
	}
	c = cards1[0];
	cards1[0] = cards2[0];
	cards2[0] = cards1[1];
	cards1[1] = cards2[1];
	cards2[1] = c;	
}
void Engine::VI(Engine &oni,bool isplayer1, int n)
{
	double z;
	int i = 0;
    Engine* oniobject;
	if (!isplayer1) oni.flipp(); (*this).flipp();
    if (Turns.size()>0) {
        while (i<Turns.size() && oni != (*Turns.at(i))) i++;
        if (i<Turns.size()) {
            oniobject = Turns.at(i);
            this->Enginedelete(Turns.at(i));
            (*this) += (*oniobject);
			delete(oniobject);
			z = (*this).tree(n, 0);
		}
		else {
            this->Enginetreedelete();
			(*this) = oni;
			z = (*this).turns1(n, 0);
		}
	}
	else {
		(*this) = oni;
		z = this->turns1(n, 0);
		
	}
    i = Turns.size() - 1;
    while (i > -1 && z != Turns.at(i)->points) i--;
    oniobject = Turns.at(i);
    this->Enginedelete(oniobject);
	(*this) += (*oniobject);
	delete(oniobject);
	if (!isplayer1) oni.flipp(); (*this).flipp(); 
}
double Engine::tree(int n, int j)
{
	double* P;
    if (Turns.size()>0) {
        P = new double[Turns.size()];
        for (int i = 0; i < Turns.size(); i++)
            P[i] = Turns.at(i)->tree(n, j + 1);
	}
    else {
        this->turns1(n, j + 1);
        P = new double[Turns.size()];
    }
	points = P[0];
    for (int i = 1; i < Turns.size(); i++)
        if (points<P[i])
			points = P[i];

	return points;
}
void Engine::Enginedelete(Engine* oni)
{
    for (int i = 0; i < Turns.size(); i++) {
        if (oni != Turns.at(i)){
            Turns.at(i)->Enginetreedelete();
            delete(Turns.at(i));
		}
	}
}
void Engine::Enginetreedelete()
{
    if (Turns.size()>0) {
        for (int i = 0; i < Turns.size(); i++) Turns.at(i)->Enginetreedelete();
        Turns.clear();
	} 
}
void Engine::operator=(const Engine& o)
{
    for (int i = 0; i < 5; i++) {
        s1p[i] = o.s1p[i];
        s2p[i] = o.s2p[i];
    }
    numberpieces1 = o.numberpieces1;
    numberpieces2 = o.numberpieces2;
    cards1[0] = o.cards1[0];
    cards1[1] = o.cards1[1];
    cards2[0] = o.cards2[0];
    cards2[1] = o.cards2[1];
    cardn = o.cardn;
}
void Engine::operator+=(const Engine& o)
{
	PieceChoice = o.PieceChoice;
	choice = o.choice;
	card = o.card;
	for (int i = 0; i < 5; i++) {
		s1p[i] = o.s1p[i];
		s2p[i] = o.s2p[i];
	}
	numberpieces1 = o.numberpieces1;
	numberpieces2 = o.numberpieces2;
	cards1[0] = o.cards1[0];
	cards1[1] = o.cards1[1];
	cards2[0] = o.cards2[0];
	cards2[1] = o.cards2[1];
	cardn = o.cardn;
    Turns = o.Turns;
}
bool Engine::operator!=(Engine &o)
{
    for (int i = 0; i < 5; i++)
        if ((s1p[i].x != o.s1p[i].x || s1p[i].y != o.s1p[i].y) || (s2p[i].x != o.s2p[i].x || s2p[i].y != o.s2p[i].y)) return true;

    if (cardn != o.cardn) return true;

    if ((cards1[0] == o.cards1[0] || cards1[0] == o.cards1[1]) && (cards1[1] == o.cards1[0] || cards1[1] == o.cards1[1])) return false;
    else return true;

    if ((cards2[0] == o.cards2[0] || cards2[0] == o.cards2[1]) && (cards2[1] == o.cards2[0] || cards2[1] == o.cards2[1])) return false;
    else return true;
    return false;
}
double Engine::turns1(int n, int j)
{
    points=0;
	Card* c;
	int x, y, ChoiceX, ChoiceY;
	for (int i = 0; i < 2; i++) {
		c = cards1[i];
		for (int cho = 0; cho < 4; cho++) {
            ChoiceX = (*c).getColFromChoice(cho);
            ChoiceY = (*c).getRowFromChoice(cho);
			if (ChoiceX != 0 || 0 != ChoiceY) {
				for (int p = 0; p<5; p++) {
					if (-1 != s1p[p].x) {
						x = s1p[p].x + ChoiceX;
						if (x>-1) {
							if (x<5) {
								y = s1p[p].y + ChoiceY;
								if (y>-1) {
									if (y < 5){
										bool b = true;
										int k = 0;
										while (b && k < 5){
											if (s1p[k].x == x && s1p[k].y == y) { b = false; }
											k++;
										}
										if (b) {
                                            Engine* Turn = new Engine;
                                            *Turn = (*this);
                                            Turn->setinfoturn(s1p[p], cho, c);
                                            Turn->s1p[p].x = x;
                                            Turn->s1p[p].y = y;
                                            Turn->turncard(true, i);
											k = 0;
											while (b && k < 5) {
												if (s2p[k].x == x) {
													if (s2p[k].y == y) {
														b = false;
                                                        Turn->s2p[k].x = -1;
                                                        Turn->s2p[k].y = -1;
                                                        Turn->numberpieces2--;
                                                        if (0 == k)  points = 1000;
													}
												}
												k++;
											}
                                            if (4 == y){ if (2 == x) points = 1000; }
                                            Turns.append(Turn);
                                            if (points == 1000) return points;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	double* P;
    P = new double[Turns.size()];
    for (int i = 0; i < Turns.size(); i++) P[i] = Turns.at(i)->turns2(n, j + 1);
	points = P[0];
    for (int i = 1; i < Turns.size(); i++) { if (points < P[i]) points = P[i]; }
	delete(P);
	return points;
}
double Engine::turns2(int n,int j)
{
	points = 0;
	Card* c;
	int x, y, ChoiceX, ChoiceY;
	for (int i = 0; i < 2; i++) {
		c = cards2[i];
		for (int cho = 0; cho < 4; cho++) {
            ChoiceX = (*c).getColFromChoice(cho);
            ChoiceY = (*c).getRowFromChoice(cho);
			if (ChoiceX != 0 || 0 != ChoiceY) {
				for (int p = 0; p<5; p++) {
					if (-1 != s2p[p].x) {
						x = s2p[p].x - ChoiceX;
						if (x>-1){
							if (x<5) {
								y = s2p[p].y - ChoiceY;
								if (y>-1) {
									if (y < 5) {
										bool b = true;
										int k = 0;
										while (b && k < 5){
											if (s2p[k].x == x && s2p[k].y == y) b = false;
											k++;
										}
										if (b) {
                                            Engine* Turn = new Engine;
                                            *Turn = (*this);
                                            Turn->setinfoturn(s1p[p], cho, c);
                                            Turn->s1p[p].x = x;
                                            Turn->s1p[p].y = y;
                                            Turn->turncard(false, i);
											k = 0;
											while (b && k < 5) {
												if (s1p[k].x == x) {
													if (s1p[k].y == y) {
														b = false;
                                                        Turn->s1p[k].x = -1;
                                                        Turn->s1p[k].y = -1;
                                                        Turn->numberpieces1--;
														if (0 == k){ points = -1000; }
													}
												}
												if (0 == y){ if (2 == x){ points = -1000; } }
												k++;
											}
                                            Turns.append(Turn);
										}
									}
								}
							}
						}
					}	
				}
			}
		}
	}
	if (-900 > points){ return points; }
	if (n>j) {
		double* P;
        P = new double[Turns.size()];
        for (int i = 0; i < Turns.size(); i++) P[i] = Turns.at(i)->turns1(n, j + 1);
		points = P[0];
        for (int i = 1; i < Turns.size(); i++) { if (points>P[i]) points = P[i]; }
		delete(P);
		return points;
	}
	else {
		points = 0;
        for (int i = 0; i <Turns.size(); i++) points = points + Turns.at(i)->getnumberpieces1() - Turns.at(i)->getnumberpieces2();
        points = points / Turns.size();
		return (points);
	}
}
