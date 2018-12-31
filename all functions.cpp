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

//LCM of 2 numbers
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int LCM, i, x, y;
	printf("Enter 2 values to find their LCM  :\n");
	scanf_s("%d%d", &x, &y);
	for (i = x; i <= x*y; i++)
	{
		if (i%x == 0 && i%y == 0)
		{
			LCM = i;
			break;
		}
	}
	printf("LCM of %d & %d is %d", x, y, LCM);

	_getch();
}

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

//Leap Year
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int year;

	printf("Enter a year to check if it is a leap year:\n");
	scanf_s("%d", &year);

	if (year % 400 == 0)
		printf("%d is a leap year.\n", year);
	else if (year % 100 == 0)
		printf("%d is not a leap year.\n", year);
	else if (year % 4 == 0)
		printf("%d is a leap year.\n", year);
	else
		printf("%d is not a leap year.\n", year);

	_getch();
}

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

//Prime Number
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int x, i, d = 0;
	printf("Enter an integer:\n");
	scanf_s("%d", &x);
	for (i = 2; i <= x / 2; i++)
	{
		if (x%i == 0)
			d++;
	}
	if (d == 0)
		printf("%d is PRIME\n", x);
	else
		printf("%d is NOT PRIME\n", x);

	_getch();
}

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


//Right Triangle from Stars
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int n, j, i;
	printf("Enter the trianlge's number of lines:\n");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)

			printf("*");
		printf("\n");
	}

	_getch();
}

//Triangle-Tree from Stars
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int n, i, j, k, c1, c2;
	printf("Enter a positive number n:\n");
	scanf_s("%d", &n);
	c1 = n - 1;
	c2 = 1;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= c1; j++)
			printf(" ");
		c1--;
		for (k = 1; k <= c2; k++)
			printf("*");
		c2 = c2 + 2;;
		printf("\n");
	}

	_getch();
}


//Pascal Triangle
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

long fact(int num)
{
	int c;
	long result = 1;

	for (c = 1; c <= num; c++)
		result = result*c;

	return (result);
}

void main()
{
	int i, num, c;
	printf("Enter the number of rows you wish to see in pascal triangle:\n");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (c = 0; c <= (num - i - 2); c++)
			printf(" ");

		for (c = 0; c <= i; c++)
			printf("%ld ", fact(i) / (fact(c)*fact(i - c)));

		printf("\n");
	}

	_getch();
}


 