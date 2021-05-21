/* C program to calculate roots of quadratic equation.*/
#include <stdio.h>
#include <math.h>

int main()
{
    printf ("A code by techpradip\n");
    
    int a,b,c;
    float disc, d, x1, x2;
    printf("Input a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    disc = (b*b-4*a*c);
    d = sqrt(disc);
    if (disc>=0)
    {
        x1 = (-b+d)/(2*a);
        x2 = (-b-d)/(2*a);
        printf("Roots are\nx1= %.2f & x2= %.2f",x1,x2);
    }
    else
        printf("Roots are imaginary");
    
    return 0;
}
