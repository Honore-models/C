#include<stdio.h>

void add_one1(int *array, int length);
void add_one2(int *array, int length);

void main(){

    int array1[] = {1,2,3,4,5,6,7,8,9,10};
    add_one1(array1,10);

    for (int i=0; i<10; i++){
        printf("array1[%d] = %d\n",i,array1[i]);
    }
    printf("\n");

    int array2[] = {1,2,3,4,5,6,7,8,9,10};
    add_one2(array2 + 5, 5);

    for (int i=0; i<10; i++){
        printf("array2[%d] = %d\n",i,array2[i]);
    }

    int test[] = {10,20,30,40,50,60};
    printf("%d \n", test[1]);
    printf("%d \n", (test + 3)[1]);

}

void add_one1(int *array, int length){ //.1
    for(int i = 0; i< length; i++){
        array[i] = array[i] + 1;
    }
}

void add_one2(int *array, int length){
    for(int i = 0; i< length; i++){
        array[i] = array[i] + 1;
    }
}

//1. Adding the array value by 1
//2. Adding the last half values of array by 1
//If you use the memory address of one of the elements of an array , the starting index will be the index of that value on the memory
//address you chose
//This is also what happens on normal use of arrays, we use the name of the array meaning that we are taking the first element of
//the array since it have the same memory address as the array itself , so we will take the starting element as having the index 0

// CHECK ON LINE: 24,25: On line 24 since we passed the memory address of the actual array as well as the memory index of the first
//element then we will get the first element being on the index 0
//BUT on line 25 we will get the element at index 0 being 40 because we set our array to start at that index.

//IF WE SET THE MEMORY ADDRESS TO BE ON A CERTAIN ELEMENT THEN WE WILL THAT ELEMENT BEING AT INDEX 0

//NOTE: If we have an array a and we say a[0]: This means what? Actually just saying a[] means that we are at the first element
//and then the number inside [] shows how many times i will shift from the first memory address

//EX int a[] = {1,2,3,4,5}
// a[2] ==> I am going to start and index zero and shift 2 times and get the value there.(JUST I AM AT THE FIRST INDEX)
// (a + 1)==> This actually means that i am at the memory address of the second element not the first
// (a + 1)[2] ==> This means that i am going to shift 2 times from the second memory address then get the value there

//By default the memory address of array is equal to that of the first element at index 0.

//NOTE: THE REASON WHY INDICES OF ARRAY START FROM 0 IS BECAUSE THE MEMORY ADDRESS OF THE ARRAY ITS SELF IS THE SAME AS THAT OF THE
//FIRST ELEMENT OF THE ARRAY. a[0] ==> Means i going to shift 0 times from the starting memory address.

// array[n]
// Where, array ==> Starting memory address
// |||||| n ==>   The numbers of shifts from starting memory address


