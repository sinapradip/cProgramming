/*
Calculating area of triangle by taking two sides a and b &
remaining angle C
*/
#include <stdio.h>
#include <math.h>
int
main ()
{
  printf ("Written by techpradip\n");
  float a, b, C, rad, area;
  printf ("Input two sides a,b & angle C in degree\n");
  scanf ("%f%f%f", &a, &b, &C);
  // PI/180 = 0.01744444 and radian = degree * PI/180
  rad = C * 0.0174;
  area = 0.5 * a * b * sin (rad);
  printf ("Area of triangle = %.2f", area);
  return 0;
}
