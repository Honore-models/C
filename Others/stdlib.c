#include <stdio.h>
#include <stdlib.h>

void main(){
    int *a;
    a = malloc(sizeof(int) * 5);
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    printf("Creating the allocation and assign new values \n");
    for (int i = 0; i<5; i++){
        printf("a[%d] = %d \n", i, a[i]);
    }
    printf("\n");

    printf("Cleaning the allocation \n");

    a = calloc(5,sizeof(int));
    for (int i = 0; i<5; i++){
        printf("a[%d] = %d \n", i, a[i]);
    }
    printf("\n");

    a[0] = 2;
    a[1] = 4;
    a[2] = 6;
    a[3] = 8;
    a[4] = 10;
    printf("Assigning new values to the allocation \n");
    for (int i = 0; i<5; i++){
        printf("a[%d] = %d \n", i, a[i]);
    }
    free(a);
}
//malloc() make allocation: is a function from this library that help us to create a memory address with empty space
//calloc() clear allocation: is a function that enable us to clear the values at the set memory address
//From line 20 we cleared the existing values and then we get zero after we reassign other values

//free(): This function enable us to make that memory we used free again to be used after using it. This prevent the problem
//of lack of memory because if we do not clean up that memory we have used the memory would be getting other values from
//other variables and it would become full so we have to clean that allocation to make memory reusable after doing our executions.
