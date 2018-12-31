//Prime Number

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int x, i, d = 0;
	printf("Enter an integer:\n");
	scanf_s("%d", &x);
	for (i = 2; i <= x / 2; i++)
	{
		if (x%i == 0)
			d++;
	}
	if (d == 0)
		printf("%d is PRIME\n", x);
	else
		printf("%d is NOT PRIME\n", x);

	_getch();
}