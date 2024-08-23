#include <stdio.h>

int main(){
    int n= 16;
    for (int i = 1; i <=n; i++)
    {   
        if(i==5)
          // break; // exit the loop
            continue;//skip this iteration 
        printf("%d\n",i);
    }
    
    return 0;
}