#include<stdio.h>

struct Complex{
    float real;
    float imag;
};

int main(){

    struct Complex first, second, sum;

    printf("Enter the first complex (real imag)\n");
    scanf("%f %f", &first.real, &first.imag);

    printf("Enter the second complex (real imag)\n");
    scanf("%f %f", &second.real, &second.imag);

    sum.real = first.real + second.real;
    sum.imag = first.imag + second.imag;

    printf("The sum of your complex number is:\n %.2f + %.2fj", sum.real, sum.imag);

return 0;
}
