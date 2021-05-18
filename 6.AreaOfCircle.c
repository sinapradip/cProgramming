/*
C program to calculate area of circle with PI defined.

*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159

int
main ()
{
  float r, A, rs;
  printf ("Enter a value of radius: ");
  scanf ("%f", &r);
  rs = pow (r, 2); // pow() function makes rs as square of r
  A = PI * rs;
  printf ("Area of circle of radius %.2f is %.2f", r, A);

  return 0;
}
