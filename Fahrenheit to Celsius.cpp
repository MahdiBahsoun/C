//Fahrenheit to Celsius

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	float tc, tf;
	printf("Enter a Tempareture in Fehrenhite:\n");
	scanf_s("%f", &tf);
	tc = 5 / 9.0*(tf - 32.0);
	printf("%f F = %f C \n", tf, tc);

	_getch();
}