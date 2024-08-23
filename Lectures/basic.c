#include <stdio.h>

int main(){
    int v; // Variable declaration
    v = 6; // Variable initialization
    printf("The output of this program is %d", v);

    //data types
    int a = 10; // integer
    float b = 20.5; // float
    char c = 'A'; // character
    double d = 30.5; // double
    printf("The value of a is %d\n", a);
    printf("The value of b is %f\n", b);
    printf("The value of c is %c\n", c);
    printf("The value of d is %.2lf\n", d);
    

// size of func
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));

// for input 
    int n;
    scanf("%d",&n);
    printf("The value of n is %d\n", n);

//escape sequence use \n 
    return 0;
}
