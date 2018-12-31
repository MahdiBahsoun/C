//Divisors of a number

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int i, n;
	printf("Enter a value to find its divisors:\n");
	scanf_s("%d", &n);
	for (i = 1; i < n / 2; i++)
		if (n%i == 0)
			printf("%d\t", i);
	_getch();
}