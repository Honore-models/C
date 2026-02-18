#include<stdio.h>

void main(){

    int array[5] = {10,20,30,40,50};

    int sum;
    for(int a=0; a<5; a++){
        sum += array[a];
    }

    printf("The Sum of elements is %d", sum);

}
