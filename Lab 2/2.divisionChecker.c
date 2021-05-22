/**
 * C program to enter marks of five subjects and find grade
 */

#include <stdio.h>

int main()
{
    printf ("A code by techpradip\n");
    int s1, s2, s3, s4, s5;
    float per; 

    /* Input marks of five subjects from user */
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);


    /* Calculate percentage */
    per = (s1 + s2 + s3 + s4 + s5) / 5.0;
    
    if (s1&&s2&&s3&&s4&&s5<=100)
    {
    
        /* show division accordin to percentage */
        if(per >= 80)
        {
            printf("Its Distinction");
        }
        else if(per >= 60)
        {
            printf("Its First Div");
        }
        else if(per >= 45)
        {
            printf("Its Second Div");
        }
        else if(per >= 35)
        {
            printf("Its Third div");
        }
        else 
        {
            printf("Its Failed");
        }
    }
    else
        printf("Either of the marks is invalid\n");
        return 0;
}
