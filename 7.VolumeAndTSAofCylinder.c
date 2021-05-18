/*
C program to calculate volume and 
total surface area of cylinder PI defined.

*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main ()
{
  printf ("A code by techpradip\n");
  float r, h, V,TSA ,rs;
  printf ("Enter a value of radius and height: ");
  scanf ("%f%f", &r, &h);
  rs = pow (r, 2);		// pow() function makes rs as square of r
  V = PI * rs *h;
  TSA = 2 * PI * r *  (r+h);
  printf ("Volume = %.2f & Total surface area = %.2f", V, TSA);
  return 0;
}