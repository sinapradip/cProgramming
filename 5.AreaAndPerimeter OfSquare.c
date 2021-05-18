/*
C program to calculate area and perimeter of square
*/
#include <stdio.h>
#include <math.h>

int main ()
{
	float l,A,P;
	printf ("Enter length l: ");
	scanf("%f",&l);
	A = pow (l,2);
	P = 4*l;
	printf ("Area of square is %.2f and perimeter is %.2f",A,P);
	return 0;
}