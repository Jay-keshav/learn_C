#include <stdio.h>

int main(){
   // printf("happy birthday!\n");
    //while loop
    int i=0;
    while(i<2){
        printf("Happy Birthday!\n");
        i = i+1;
    }
    int u=0;
    while(u<2)
    {
        printf("the value of i is %d\n", u+10);
        u++;
    }
    
    //do while loop, it atleast print 1 times because condition checked after the code run
    int l =0;
    do {
        printf("the value of L is %d\n",l);
        l++;
    }while(l<0);

    // for loop
    int n =6;
    for (int i=0;i<n;i++){
        printf("he");
    }
    return 0;
}