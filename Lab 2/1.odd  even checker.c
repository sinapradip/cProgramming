// odd  even checker
#include <stdio.h>
int main() {
    printf ("A code by techpradip\n");
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number%2==0)   // true if remainder is 0
    {
        printf("You entered even number");
    }
    else
        printf("You entered odd number.");
    return 0;
}

