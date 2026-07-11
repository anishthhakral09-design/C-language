#include<stdio.h>
int main(){
int a, b;
printf("ENTER THE NUMBER : ");
scanf("%d" , &a);
printf("ENTER TOTAL : ");
scanf("%d" , &b);

int percentage=(a*100)/b;

printf("THE RESULT IS :%d percent", percentage);

    return 0;
}
