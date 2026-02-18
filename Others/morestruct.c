#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int data1;
    int data2;
    int *array;

} data;


void main(){

    data st1;

    st1.data1 = 100;
    st1.data2 = 90;
    st1.array = malloc(sizeof(int) * 5);

    for(int i = 0; i<5; i++){
        st1.array[i] = i + 1;
    }

    data st2;
    st2 = st1;

    printf("%d %d \n", st1.data1, st1.data2);
    printf("The values copied from st1 \n");
    printf("%d %d \n", st2.data1, st2.data2);

    printf("%p \n", st2.array);
    printf("%p \n", st1.array);
    printf("This shows that both will have the same memory address \n");

    for(int i = 0; i<5; i++){
        printf("st2.array[%d] = %d \n",i, st2.array[i] );
    }

    st2.array[2] = 1500;
    printf("\n");

    for(int i = 0; i<5; i++){
        printf("st2.array[%d] = %d \n",i, st1.array[i] );
    }

    free(st1.array);


}

//We can copy all values from one struct to another struct variable
//This will copy all values from st1 to st2
// You can also modify the values of struct1 from struct 2
