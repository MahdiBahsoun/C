//Celsius to Fahrenheit

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	float tc, tf;
	printf("Enter a Tempareture in Celsius:\n");
	scanf_s("%f", &tc);
	tf = tc * 9 / 5 + 32;
	printf("%f C = %f F \n", tc, tf);

	_getch();
}