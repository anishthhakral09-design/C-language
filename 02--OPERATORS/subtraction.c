#include <stdio.h>
int main()
{
    int a, b;
    printf("ENTER THE  NUMBER YOU WANT TO SUBTRACT TO : ");
    scanf(" %d", &a);
    printf("ENTER THE NUMBER YOU WANT TO SUBTRACT FROM : ");
    scanf(" %d", &b);
    int subtraction = a - b;
    printf("THE RESULT IS :%d", subtraction);
    return 0;
}