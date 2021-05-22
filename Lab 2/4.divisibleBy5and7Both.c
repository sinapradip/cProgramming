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
    if ( num%5==0 && num%7==0)
    {
    printf("%d is exactly divisible by 5 and 7.",num);
    }
    else 
        printf("%d is not exactly divisible by 5 and 7 both .",num);
        return 0;
}
