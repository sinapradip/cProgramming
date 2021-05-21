/*
Calculating area of triangle by taking base and height as input.
Formula used Area= 0.5*b *h 
*/
#include <stdio.h>

int
main ()
{
  int b, h;
  float area;
  printf ("Enter base and height respectively:\n");
  scanf ("%d%d", &b, &h);
  area = 0.5 * b * h;
  printf ("Area of triangle = %.2f", area);
  printf ("\nWritten by techpradip");
  
  return 0;
}
