#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));

    int randomnum = (rand() % 100) +1;
    int noofguess = 0;
    int guessed;
   // printf("random no : %d\n", randomnum);
    do
    {
        printf("guess a no: ");
        scanf("%d",&guessed);
        if (guessed>randomnum){
            printf("Lower no please!\n");
        }
        else if(randomnum>guessed){
            printf("Higher no please!\n");
        }
        else{
            printf("congrats!!\n");
        }
        noofguess++;
    }while (guessed!=randomnum);

    printf("You guessed the number in %d guesses",noofguess);

    return 0;
}