#include<stdio.h>
int main ()
{
	float l,b,A,P;
	printf ("Enter length l and breadth b");
	scanf("%f%f",&l,&b);
	A = l * b;
	P = 2*(l+b);
	printf ("Area of rectangle is %.2f and perimeter is %.2f",A,P);
	return 0;
}
