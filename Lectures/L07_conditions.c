#include <stdio.h>

int main(){
    //2 method 1. if-else 2. switch
    //int age =18; 
    int a;
    printf("Enter:");
    scanf("%d", &a);
    
    // if(age>=18){
    //     printf("You can vote\n");}
    // else{
    //     printf("you cannt vote");
    // }
    switch(a){
        case 1: 
            printf("......1");break;
        case 2: 
            printf(".......2"); break;
        default: 
            printf(".....default"); break;
    }
    return 0;
}