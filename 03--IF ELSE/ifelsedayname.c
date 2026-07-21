#include <stdio.h>
// PROGRAM TO READ DAY NUMBER AND PRINT DAY NAME
int main () {
    int day;
    printf("ENTER THE DAY NUMBER TO SEE DAY NAME\n");
    scanf("%d" , &day);

if (day == 1) {
    printf("ITS SUNDAY");

}
else if (day == 2){ 
    printf("ITS MONDAY");

}
 else if (day == 3) { 
    printf("ITS TUESDAY");

 }

 else if (day == 4){
    printf("ITS WEDNESDAY");

 }

 else if ( day == 5){
    printf("ITS THURSDAY");

 }
 else if ( day == 6){
 printf(" ITS FRIDAY ");}

 else if (day == 7){
    printf("SATURDAY ");
 }

 else  { 
    printf("INVALID INPUT");
 }





    return 0;
}