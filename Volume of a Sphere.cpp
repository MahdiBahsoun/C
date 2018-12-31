//Volume of a Sphere

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int r;
	float v;

	printf("Give the radius of the sphere:\n");
	scanf_s("%d", &r);

	v = (4.0*3.14*r) / 3.0;
	printf("The volume is: %f", v);

	_getch();
}