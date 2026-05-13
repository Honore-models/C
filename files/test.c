#include <stdio.h>

int power(int n1, int n2){
    return n1 * n2;
}

int main(void){
    int n1;
    int n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("%d power %d is: %d", n1,n2, power(n1,n2));

}
