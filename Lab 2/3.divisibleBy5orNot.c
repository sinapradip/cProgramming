/* 
* If a number is exactly divisible or not
*/
#include <stdio.h>

int main()
{
    printf ("A code by techpradip\n");
    int num;
    printf("Enter an interger: ");
    scanf("%d",&num);
    if (num%5==0)
    {
    printf("%d is exactly divisible by 5.",num);
    }
    else 
        printf("%d is not exactly divisible by 5.",num);
        return 0;
}
