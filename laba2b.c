/ ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib> // для system
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	double m, n,r, k;
	scanf_s("%lf", &n);
	n++;
	k = 0;
	r = 0;
	m = 1;
	do
	{
		
		r = 2*n - 1;
		
		m = m*(r - 1);
		r = r - 1;
		k += m;
	} while (r > 2);
	printf("\n%lf", m);
}

static int
factorial(int n)
{
	return (n < 2) ? 1 : n * factorial(n - 1);
}

int main()
{
	double x, b, sum, a, h, d, n, y;
	printf("Enter a:");
	scanf_s("%lf", &a);
	printf("Enter b:");
	scanf_s("%lf", &b);
	printf("Enter h:");
	scanf_s("%lf", &h);
	printf("Enter d:");
	scanf_s("%lf", &d);

	for (x = a; x <= b; x += h);
	{
		n = 0;
		sum = 0;

		do
		{
			n++;
			y = 0;
			y = (pow(x, n * 2) - 1) / (factorial(2 * n - 1));
			sum += y;
		} while (fabs(y) > d);
		printf("\n sum=%.3lf x=%.3lf", sum, x);
	}
	printf("\n");
}
