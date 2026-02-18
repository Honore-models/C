#include<stdio.h>

int factorial(int n){
        if(n == 1 || n == 0){
            return 1;
        }else{
            return n * factorial(n-1);
        }
    }

int main(void){


    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The factorial of %d is: %d ",num, factorial(num));


return 0;
}


