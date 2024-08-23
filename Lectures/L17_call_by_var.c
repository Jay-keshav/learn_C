#include <stdio.h>


//int sum(int *, int *);
int summ(int , int);

int summ(int a, int c){
    int a =6; // Sum function cannot change x using a because copy of x is provided to sum in a
    return a + c;
}

// Sum should change the value of x
/*int sum(int* a, int* b){
    *a = 6;
    return (*a + *b);
}*/
int main(){
    int x = 1, y=6;
    printf("The sum of 1 and 6 is %d\n", summ(x, y));
    printf("The value of x is %d", x);

    // int p = 1, o=6;
    // printf("The sum of 1 and 6 is %d\n", sum(&p, &o));
    // printf("The value of x is %d", p);
    // return 0;
}