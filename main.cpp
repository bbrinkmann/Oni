#ifndef MAIN_H
#define MAIN_H

#include "oniturn.h"
#include <iostream>
#include <string.h>
#include <time.h>

void main()
{
	int i, G1 = 0, G2 = 0;
	bool a = true;
	int s1[5][2] = { { 2, 0 }, { 0, 0 }, { 1, 0 }, { 3, 0 }, { 4, 0 } };
	int s2[5][2] = { { 2, 4 }, { 0, 4 }, { 1, 4 }, { 3, 4 }, { 4, 4 } };
	Card c1;
	Card c2;
	Card c3;
	Card c4;
	Card c5;
	Card* c[5] = { &c1, &c2, &c3, &c4, &c5};
	oniturn oni1(s1, s2, c);
	oniturn oni2(s1, s2, c);
	oni2.ausgabeoni();
	while (a)
	{
		i = 0;
		while (a && 0 == i)
		{
			i++;
			oni1.VI(oni2, false, 2);
			if (oni1.getpieces2x(0) == -1)
			{
				a = false;
				G1++;
			}
			else
			{
				if (oni1.getpieces1x(0) == 2)
				{
					if (oni1.getpieces1y(0) == 4)
					{
						a = false;
						G1++;
					}
				}
			}
		}
		while (a && 1 == i)
		{
			i++;
			oni2.VI(oni1, true, 4);
			if (oni2.getpieces1x(0) == -1)
			{
				a = false;
				G2++;
			}
			else
			{
				if (oni2.getpieces2x(0) == 2)
				{
					if (oni2.getpieces2y(0) == 0)
					{
						a = false;
						G2++;
					}
				}
			}
		}
		cout << G1 << " " << G2 << endl;
		if (1 == i)
		{
		oni1.ausgabeoni();
		}
		else
		{
		oni2.ausgabeoni();
		}
	}
	system("Pause");
}
#endif