//Triangle-Tree from Stars

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int n, i, j, k, c1, c2;
	printf("Enter a positive number n:\n");
	scanf_s("%d", &n);
	c1 = n - 1;
	c2 = 1;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= c1; j++)
			printf(" ");
		c1--;
		for (k = 1; k <= c2; k++)
			printf("*");
		c2 = c2 + 2;;
		printf("\n");
	}

	_getch();
}