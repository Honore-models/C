#include<stdio.h>


int main(){

    char numbers[10] = "10 15.5";
    int a;
    float b;

    sscanf(numbers, "%d %f", &a,&b);

    printf("The numbers are %d and %.2f", a,b);


return 0;
}
