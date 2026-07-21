#include<stdio.h>
int main (){
    int secret = 67;
    int guess = 0;

for (secret= 67 ; guess != secret; ){
    printf("ENTER YOUR GUESS\n");
    scanf("%d" , &guess);
     
    if (guess > secret)
    printf("THE SECRET NUMBER IS LOWER FROM THIS NUMBER\n");
 
    else if (guess<secret)
    printf("THE SECRET NUMBER IS HIGHER FROM THIS NUMBER\n");

    else {
        printf("CONGRATULATIONS , CORRECT GUESS\n");
    }
}



return 0;
}
