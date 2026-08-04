#include <stdio.h>

// FUNCTION DECLARATION
void addition();
void subtraction();
void division();
void multiplication();

// CODE STARTS
int main()
{
    int a, b, n;
    printf("ENTER THE VALUE OF FIRST INTEGER :");
    scanf("%d", &a);
    printf("ENTER THE VALUE OF SECOND INTEGER : ");
    scanf("%d", &b);

    // FUNCTION CALL
    addition(a, b);
    subtraction(a, b);
    division(a, b);
    multiplication(a, b);

    return 0;
}

// FUNCTION DEFINATION
void addition(a, b)
{
    int sum = a + b;
    printf("THE SUM IS : %d\n", sum);
}

void subtraction(a, b)
{
    int subtraction = a - b;
    printf("THE SUBTRACTION IS : %d\n", subtraction);
}

void division(int a, int b)
{
    float division = (float)a / b;
    printf("THE DIVISION IS : %.2f\n", division);
}

void multiplication(a, b)
{
    int multiplication = a * b;
    printf("THE MULTIPLICATION IS : %d\n", multiplication);
}