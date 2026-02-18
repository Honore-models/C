#include<stdio.h>

int main(void){

    for(int i=1; i<=10; i++){
        for(int j=1; j<=i; j++){
            if(i == 10 || j == i || j == 1){
                printf("$");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

return 0;
}


// *
// * *
// *   *
// *     *
// * * * * *

// Here the vertical line condition is j == 1
// The horizontal line condition is i == 10
// The slanting line condition is j == i

