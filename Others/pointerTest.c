#include <stdio.h>

int main(void){

    //int var = 5;
    //printf("Value: %d\n", var);
    //printf("Address: %u\n", &var);

    int *pc,c;

    c = 22;
    printf("Address of c: %u\n", &c);
    printf("Value of c: %d\n\n",c);

    pc = &c;
    printf("Address of pointer pc: %u\n", pc);
    printf("Content pointer pc: %d\n\n", *pc);

    c = 11;
    printf("Address of pinter pc: %u\n", pc);
    printf("Content pointer pc: %d\n\n", *pc);




    return 0;
}
