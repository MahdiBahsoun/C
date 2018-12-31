//Fibonacci n-th value of a number

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int Un, i, n, a = 1, b = 1;
	printf(" Enter no n to find Un : \n");
	scanf_s("%d", &n);
	if (n > 2)
	{
		for (i = 3; i <= n; i++)
		{
			Un = a + b;
			a = b;
			b = Un;
		}
		printf("U%d = %d \n", n, Un);
	}
	_getch();
}