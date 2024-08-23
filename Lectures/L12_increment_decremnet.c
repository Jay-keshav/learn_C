#include <stdio.h>

int main(){
    int i =1;
    printf("the value of i id %d\n",i);
    printf("the value of i id %d\n",++i); // increments first then print (pre increment)
    printf("the value of i id %d\n",i);
    int j =1;
    printf("the value of j id %d\n",j);
    printf("the value of j id %d\n",j++);//print first then increment (post increment)
    printf("the value of j id %d\n",j);

    // i +=2 // it will add 2 to i
    
    return 0;
}