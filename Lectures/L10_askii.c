#include <stdio.h>

int main(){

    char ch = 'a';
    printf("The character %c 's value is %d\n", ch, ch);

    
    char x ;
    printf("Enter a letter :");
    scanf("%c", &x);
    if (x >=97 && x<=122){
        printf("this is a lower case character\n");
    }
    else {
        printf("this is a upper case char");
    }

    return 0;
}