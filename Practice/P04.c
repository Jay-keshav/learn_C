#include <stdio.h>

int main(){
    int yr;
    printf("Enter yr:");
    scanf("%d", &yr);

    if ((yr%4==0 && yr%100!=0) || yr%400==0){
        printf("%d is a leap year",yr);
    }
    else {
        printf("%d is not a leap yr", yr);
    }
    return 0;
}