//LCM of 2 numbers

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int LCM, i, x, y;
	printf("Enter 2 values to find their LCM  :\n");
	scanf_s("%d%d", &x, &y);
	for (i = x; i <= x*y; i++)
	{
		if (i%x == 0 && i%y == 0)
		{
			LCM = i;
			break;
		}
	}
	printf("LCM of %d & %d is %d", x, y, LCM);

	_getch();
}
