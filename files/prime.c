#include<stdio.h>
#include<stdbool.h>

int main(){

    int num;
    bool isPrime = true;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num <= 1){
        isPrime = false;
    }

    for(int i=2; i<= num/2; i++){
        if(num % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        printf("%d is a prime number", num);
    }else{
        printf("%d is not a prime number", num);
    }



return 0;
}
