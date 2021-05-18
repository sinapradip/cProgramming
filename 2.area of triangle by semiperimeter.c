/*
 * C program to find the area of a triangle, given three sides
 */

#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    printf ("Written by techpradip\n");
    int a,b,c;
    float s,d,A;
    printf("Enter a b c\n");
    scanf("%d%d%d",&a,&b,&c);
    
    s=(a+b+c)*0.5;
    d=s*(s-a)*(s-b)*(s-c);
    A=sqrt(d);
    printf("Area of triangle = %.2f",A);
    return 0;
}
