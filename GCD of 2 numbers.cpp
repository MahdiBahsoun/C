//GCD of 2 numbers

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int GCD, i, a, b;
	printf("Enter 2 values to find their GCD:\n");
	scanf_s("%d%d", &a, &b);
	for (i = 1; i <= a && i <= b; i++)
	{
		if (a%i == 0 && b%i == 0)
			GCD = i;
	}
	printf("Gcd of %d & %d is %d", a, b, GCD);

	_getch();
}