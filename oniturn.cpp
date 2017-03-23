#include "oniturn.h"

oniturn::oniturn()
{
	turns = 0;
	used = false;
}
oniturn::oniturn(int s1[5][2], int s2[5][2], Card* c[5])
{
	numberpieces1 = 5;
	numberpieces2 = 5;
	used = false;
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
	turns = 0;
}
oniturn::oniturn(const oniturn& o)
{
	used = false;
	for ( int i = 0; i < 5; i++)
	{
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
	switch (p.x)
	{
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
	switch (p.y)
	{
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
void oniturn::flipp()
{
	double x;
	Card* c;
	piece2 a, b;
	x = numberpieces1;
	numberpieces1 = numberpieces2;
	numberpieces2 = x;
	for (int i = 0; i < 5; i++)
	{
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
void oniturn::VI(oniturn &oni,bool isplayer1, int n)
{
	double z;
	int i = 0;
	oniturn* oniobject;
	if (isplayer1){}
	else{ oni.flipp(); (*this).flipp(); }
	if (used)
	{
		while (oni != (*T[i]) && i<turns)
		{
			i++;
		}
		if (i<turns)
		{
			oniobject = T[i];
			this->oniturndelete((*oniobject));
			(*this) += (*T[i]);
			delete(oniobject);
			z = (*this).tree(n, 0);
		}
		else
		{
			this->oniturndelete((oni));
			(*this) = oni;
			this->oniturndelete((oni));
			z = (*this).turns1(n, 0);
		}
	}
	else
	{
		(*this) = oni;
		z = (*this).turns1(n, 0);
	}
	i = 0;
	while (i<turns && z != T[i]->points)
	{
		i++;
	}
	if (i<turns){}
	else{ i--; }
	oniobject = T[i];
	this->oniturndelete((*oniobject));
	(*this) += (*T[i]);
	delete(oniobject);
	if (isplayer1)
	{}
	else
	{ 
		oni.flipp(); 
		(*this).flipp(); 
	}
}
double oniturn::tree(int n, int j)
{
	double* P;
	P = new double[turns];
	if (used)
	{
		for (int i = 0; i < turns; i++)
		{
			P[i] = T[i]->tree(n, j + 1);
		}
	}
	else
	{
		for (int i = 0; i < turns; i++)
		{
			P[i] = T[i]->turns1(n, j + 1);
		}
	}
	points = P[0];
	for (int i = 1; i < turns; i++)
	{
		if (points<P[i])
		{
			points = P[i];
		}
	}
	return points;
}
void oniturn::oniturndelete(oniturn &oni)
{
	used = false;
	for (int i = 0; i < turns; i++)
	{
		if (oni != (*T[i]))
		{
			T[i]->onitreedelete();
			delete(T[i]);
		}
	}
}
void oniturn::onitreedelete()
{
	if (used)
	{
		for (int i = 0; i < turns; i++)
		{
			T[i]->onitreedelete();
			delete(T[i]);
		}
	}
}
void oniturn::operator=(const oniturn& o)
{
	turns = 0;
	used = o.used;
	for (int i = 0; i < 5; i++)
	{
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
void oniturn::operator+=(const oniturn& o)
{
	PieceChoice = o.PieceChoice;
	choice = o.choice;
	card = o.card;
	used = o.used;
	for (int i = 0; i < 5; i++)
	{
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
	turns = o.turns;
	for (int i = 0; i < o.turns; i++)
	{
		T[i] = o.T[i];
	}
}
bool oniturn::operator!=(oniturn &o)
{
	if (NULL != &o && this != NULL  )
	{
		for (int i = 0; i < 5; i++)
		{
			if (s1p[i].x != o.s1p[i].x || s1p[i].y != o.s1p[i].y || s2p[i].x != o.s2p[i].x || s2p[i].y != o.s2p[i].y)
			{
				return true;
			}
		}
		if (cardn != o.cardn)
		{
			return true;
		}
		if (cardn != o.cardn)
		{
			return true;
		}
		if ((cards1[0] == o.cards1[0] || cards1[0] == o.cards1[1]) && (cards1[1] == o.cards1[0] || cards1[1] == o.cards1[1]))
		{
			return false;
		}
		else
		{
			return true;
		}
		if ((cards2[0] == o.cards2[0] || cards2[0] == o.cards2[1]) && (cards2[1] == o.cards2[0] || cards2[1] == o.cards2[1]))
		{
			return false;
		}
		else
		{
			return true;
		}
		return false;
	}
	return true;
}
double oniturn::turns1(int n, int j)
{
	turns = 0;
	Card* c;
	int x, y, ChoiceX, ChoiceY;
	for (int i = 0; i < 2; i++)
	{
		c = cards1[i];
		for (int cho = 0; cho < 4; cho++)
		{
			ChoiceX = (*c).getXFromChoice(cho);
			ChoiceY = (*c).getYFromChoice(cho);
			if (ChoiceX != 0 || 0 != ChoiceY)
			{
				for (int p = 0; p<5; p++)
				{
					if (-1 != s1p[p].x)
					{
						x = s1p[p].x + ChoiceX;
						if (x>-1)
						{
							if (x<5)
							{
								y = s1p[p].y + ChoiceY;
								if (y>-1)
								{
									if (y < 5)
									{
										bool b = true;
										int k = 0;
										while (b && k < 5)
										{
											if (s1p[k].x == x)
											{
												if (s1p[k].y == y)
												{
													b = false;
												}
											}
											k++;
										}
										if (b)
										{
											T[turns] = new oniturn;
											(*T[turns]) = (*this);
											T[turns]->s1p[p].x = x;
											T[turns]->s1p[p].y = y;
											T[turns]->turncard(true, i);
											T[turns]->setinfoturn(s1p[p], cho, c);
											k = 0;
											while (b && k < 5)
											{
												if (s2p[k].x == x)
												{
													if (s2p[k].y == y)
													{
														b = false;
														T[turns]->s2p[k].x = -1;
														T[turns]->s2p[k].y = -1;
														T[turns]->numberpieces2--;
														if (0 == k){ turns++; return 1000; points = 1000; }
													}
												}
												k++;
											}
											turns++;
											if (4 == y){ if (2 == x){ return 1000; points = 1000; } }
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
	used = true;
	double* P;
	P = new double[turns];
	for (int i = 0; i < turns; i++)
	{
		P[i] = T[i]->turns2(n, j + 1);
	}
	points = P[0];
	for (int i = 1; i < turns; i++)
	{
		if (points<P[i])
		{
			points = P[i];
		}
	}
	delete(P);
	return points;
}
double oniturn::turns2(int n,int j)
{
	points = 0;
	turns = 0;
	Card* c;
	int x, y, ChoiceX, ChoiceY;
	for (int i = 0; i < 2; i++)
	{
		c = cards2[i];
		for (int cho = 0; cho < 4; cho++)
		{
			ChoiceX = (*c).getXFromChoice(cho);
			ChoiceY = (*c).getYFromChoice(cho);
			if (ChoiceX != 0 || 0 != ChoiceY)
			{
				for (int p = 0; p<5; p++)
				{
					if (-1 != s2p[p].x)
					{
						x = s2p[p].x - ChoiceX;
						if (x>-1)
						{
							if (x<5)
							{
								y = s2p[p].y - ChoiceY;
								if (y>-1)
								{
									if (y < 5)
									{
										bool b = true;
										int k = 0;
										while (b && k < 5)
										{
											if (s2p[k].x == x)
											{
												if (s2p[k].y == y)
												{
													b = false;
												}
											}
											k++;
										}
										if (b)
										{
											T[turns] = new oniturn;
											(*T[turns]) = *this;
											T[turns]->s1p[p].x = x;
											T[turns]->s1p[p].y = y;
											T[turns]->turncard(false, i);
											T[turns]->setinfoturn(s1p[p], cho, c);
											k = 0;
											while (b && k < 5)
											{
												if (s1p[k].x == x)
												{
													if (s1p[k].y == y)
													{
														b = false;
														T[turns]->s1p[k].x = -1;
														T[turns]->s1p[k].y = -1;
														T[turns]->numberpieces1--;
														if (0 == k){ points = -1000; }
													}
												}
												if (0 == y){ if (2 == x){ points = -1000; } }
												k++;
											}
											turns++;
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
	used = true;
	if (-1000 == points){ return points; }
	if (n>j)
	{
		double* P;
		P = new double[turns];
		for (int i = 0; i < turns; i++)
		{
			P[i] = T[i]->turns1(n , j+1);
		}
		points = P[0];
		for (int i = 1; i < turns; i++)
		{
			if (points>P[i])
			{
				points = P[i];
			}
		}
		delete(P);
		return points;
	}
	else
	{
		points = 0;
		for (int i = 0; i < turns; i++)
		{
			points = points + T[i]->getnumberpieces1() - T[i]->getnumberpieces2();
		}
		points = points / turns;
		return (points);
	}
}
void oniturn::ausgabeoni()
{
	for (int p = 0; p < 5; p++)
	{
		cout << " " << "s1 " << s1p[p].x << " " << s1p[p].y << " ";
	}
	cout << "N" << numberpieces1 << " " << endl;
	for (int p = 0; p < 5; p++)
	{
		cout << " " << "s2 " << s2p[p].x << " " << s2p[p].y << " ";
	}
	cout <<"N"<< numberpieces2 << " ";
	cout << endl;
}