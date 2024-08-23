#include <stdio.h>
// func prototype
int sum(int,int);

//func defination
int sum (int x,int y){
   printf("the sum of %c and %c is %d\n",'a','b',x+y);
   return x+y;
}
int mul(int,int);

int mul (int a, int b){
    return a*b;
}

int main(){
    int a=4;
    int b=2;
    // int c=a+b;
    // printf("Sum of %c and %c is %d",'a','b',c);
    sum(a,b); // function call the printf output
    printf("the sum: %d\n",sum(a,b));// if we have both then the out is 1s the print statement then the return value
 
   // int c = mul(a,b); // function call , here weget the return value 
    printf("the mul is : %d\n", mul(2,3));
    return 0;
}