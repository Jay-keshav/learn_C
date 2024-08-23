#include <stdio.h>

int factorial(int);

int main(){
    int a;
    printf("enter a no whose u want a factorial: ");
    scanf("%d",&a);
    printf("the factorial of %d is %d\n",a, factorial(5));
    return 0;
}


int factorial(int a){
    if (a==1 || a==0){ //base condtion
        return 1;
    }
    return factorial(a-1)*a; //its a recursive call
}
