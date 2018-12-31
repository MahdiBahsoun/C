//Pascal Triangle

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

long fact(int num)
{
	int c;
	long result = 1;

	for (c = 1; c <= num; c++)
		result = result*c;

	return (result);
}

void main()
{
	int i, num, c;
	printf("Enter the number of rows you wish to see in pascal triangle:\n");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (c = 0; c <= (num - i - 2); c++)
			printf(" ");

		for (c = 0; c <= i; c++)
			printf("%ld ", fact(i) / (fact(c)*fact(i - c)));

		printf("\n");
	}

	_getch();
}