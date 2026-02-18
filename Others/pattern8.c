#include<stdio.h>

int main(void){
    for(int i=1; i<=10; i++){
        for(int j=10; j>=i+1; j--){
            printf(" ");
        }
        for(int k=1; k<=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=10; i>=1; i--){
        for(int j=10; j>i; j--){
            printf(" ");
        }
        for(int k=1; k<=(2*i-1); k++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}
