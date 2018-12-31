//Harmonic Number

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	//THe n-th harmonic number is the sum of the reciprocals of the first n natural numbers.

	int i, n;
	float harmonic = 0;
	printf("Enter a number:\n");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
		harmonic = harmonic + 1.0 / i;
 
	printf("H%d = %f", n, harmonic);

	_getch();
}