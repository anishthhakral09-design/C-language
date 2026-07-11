#include <stdio.h>
int main()
{
    // DIVISION OF TWO NUMBERS
    int a, b, divide;
    printf("ENTER THE NUMBER YOU WANT TO DIVIDE TO :");
    scanf("%d", &a);
    printf("ENTER THE NUMEBR YOU WANT TO DIVIDE FROM");
    scanf("%d", &b);

    divide = a / b;

    printf("THE DIVISION OF TWO ENTERED NUMBERS IS :%d", divide);

    return 0;
}