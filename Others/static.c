#include<stdio.h>

int counter(int n){

    static int sum = 0;
    sum += n;
    return sum;
}
int main(void){

    counter(2);
    counter(4);
    counter(6);
    printf("%d",counter(8));

return 0;
}
