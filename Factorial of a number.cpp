//Factorial of a number

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int n, i, f = 1;
	printf("Enter a number:\n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		f = f*i;
	printf("The factorial of %d is: %d\n", n, f);
	_getch();
}