//Seconds to hh:mm:ss

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int hr, min, sec, x;
	printf("Enter the number of seconds:\n");
	scanf_s("%d", &x);
	hr = x / 3600;
	min = (x % 3600) / 60;
	sec = x % 60;

	printf("%dhr %dmin %dsec", hr, min, sec);

	_getch();
}
