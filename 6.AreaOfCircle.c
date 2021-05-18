/*
C program to calculate area of circle and its circumference with PI defined.

*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159

int
main ()
{
  printf ("A code by techpradip\n");
  float r, A, rs, c;
  printf ("Enter a value of radius: ");
  scanf ("%f", &r);
  rs = pow (r, 2);		// pow() function makes rs as square of r
  A = PI * rs;
  c = 2 * PI * r;
  printf ("Area of circle of radius %.2f is %.2f and circumference is %f", r,A, c);

  return 0;
}
