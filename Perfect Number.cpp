//Perfect Number

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int n, i, s = 0;
	printf("Entera number to check if its perfect:\n");
	scanf_s("%d", &n);
	for (i = 1; i <= n / 2; i++)
	{
		if (n%i == 0)
			s = s + i;
	}
	if (s == n)
		printf("%d is a perfect number\n", n);
	else
		printf("%d is not a perfect number\n", n);

	_getch();
}