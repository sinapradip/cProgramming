/* C program to convert form F to C temp.*/
#include <stdio.h>

int main()
{
    printf ("A code by techpradip\n");
    
    float F, C;
    printf("Enter temp in Farenheit: ");
    scanf("%f",&F);
    C = 5/9.0*(F-32);
    printf("Temp in Celcius= %.1f°C",C);
    
    return 0;
}

