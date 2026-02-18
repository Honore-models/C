#include<stdio.h>

void main(){
    int a = 10;
    int b = 20;
    int c = 25;

    int array[] = {1,2,3};
    int d = 30;

    printf("&a:        %p \n", &a);
    printf("&b:        %p \n", &b);
    printf("&d:        %p \n", &c);
    printf("&array:    %p \n", array);
    printf("&array[0]: %p \n", (array + 0));
    printf("&array[1]: %p \n", (array + 1));
    printf("&array[2]: %p \n", (array + 2));
    printf("&d:        %p \n", &d);


}

//STACK: Is a way the computer assigns the memory addresses to variable in order.

// stack ( at the top)
//
// variable   address  value
// int a        10      120
// int b        11      65
// int c        12      53
// arr[0]       13      20
// arr[1]       14      25
// arr[2]       15      30
// int d        16      100
// int e        17      110
//
// heap (at the bottom)

//Here we cannot increase the size of the array, because for example if we increased the length of the array to 4 it will be impossible
//because the fourth value i will be adding will need to take the memory address of 16 and that memory address (17) was already taken by
// int d.

//To solve this problem we can use "dynamic allocation" of the memory where if we want to increase the size of the array the stack of
//memory addresses re-fleshes and add the added element Automatically.



