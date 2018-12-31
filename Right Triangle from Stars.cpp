//Right Triangle from Stars

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int n, j, i;
	printf("Enter the trianlge's number of lines:\n");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)

			printf("*");
		printf("\n");
	}

	_getch();
}