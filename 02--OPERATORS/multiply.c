#include <stdio.h>
int main()
{
    // MULTIPLICATION OF TWO NUMBERS PROGRAM
    int a, b, multiply;
    printf("ENTER THE NUMBER YOU WANT TO MULTIPLY TO : ");
    scanf("%d", &a);
    printf("ENTER THE SECOND NUMBER : ");
    scanf("%d", &b);

    multiply = a * b;

    printf("THE MULTIPLY OF TWO NUMBERS IS :%d\n", multiply);

    return 0;
}