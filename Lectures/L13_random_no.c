#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0)); // initialise random no generator

    int randomnum = (rand());
    int rnum = (randomnum%100 );
    int rnum1 = (randomnum%100 +1 );
    printf("randomnum : %d\n",randomnum);    
    printf("randomnum : %d\n",rnum);    
    printf("randomnum : %d\n",rnum1);    
    return 0;
}