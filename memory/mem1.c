#include<stdio.h>
#include<string.h>
int main(){

    char home[10]= "kayonza";

    int *ptr = malloc(5 * sizeof(int));
    char *name = malloc(strlen(home) + 1);

return 0;
}


//The difference between static and dynamic memory allocation is that in static memory allocation the
//memory is determined at compile time but in dynamic memory allocation the memory needed is determined
//at run time

//WHAT ARE DETERMINED AT COMPILE TIME
// 1.The syntax
// 2.The memory that will be required by the stack at runtime

//WHAT ARE DETERMINED AT RUN TIME

// 1.Calculations
// 2.Allocating memory
// 3.User inputs


//When you say int name[10] = 'top gun': This means that at compile time the program will know exactly the
//The size that will be stored in stack.
//But if you say int *name = malloc(5*sizeof(int)); Here the exact memory required is not yet known
//since 5*sizeof(int)); is a formula that needs to be calculated and the calculations take place at
//runtime, that is why the memory needed will be dynamic

//When the memory needed is determined at the compile time the allocation will be done on STACK
//When the memory needed is determined at the run time the allocation will be done on HEAP

//Since STACK is non resizable and HEAP is resizable that is the reason why when the memory is allocated
//at Stack it is static and when the memory is allocated at Heap it is dynamic


