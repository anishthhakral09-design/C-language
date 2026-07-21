#include <stdio.h>
// CALCULATOR WITHOUT HELP OF CHAT GPT
int main() {
float a , b ;
int op;
printf("ENTER THE VALUE OF A\n");
scanf(" %f" , &a);
printf("ENTER THE VALUE OF B\n");
scanf("%f" , &b);
printf("ENTER THE OPERAND NUMERICAL\n");
scanf("%d" , &op);

if (op == 1) {
    printf("RESULT IS  %.2f\n" , a+b);
}
else if (op == 2) {
    printf("RESULT IS %.2f\n"  , a-b);

}
else if (op == 3){
printf("RESULT IS %.2f\n", a*b);
}
 else if (op == 4){
    printf("RESULT IS  %.2f\n" , a/b);

 }
 else {
    printf("INVALID INPUT");
 }














    return 0;
}