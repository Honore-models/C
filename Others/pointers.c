#include<stdio.h>

void modify(int *a, int *b);
void arrayMod(int *array);

void main(){

    int a = 5;
    int b = 10;
    int z = 1;
    int *p;
    p = &b;

    int x = 20;
    int y = 30;
    modify(&x, &y);
    printf("%d\n", x);
    printf("%d\n", y);

    printf(" p: %p\n", p);
    printf("&b: %p\n", &b);
    printf("&a: %p\n", &a);

    printf("%d\n", *p);
    z = a + *p;
    printf("%d\n", z);

    *p = *p + 1;
    printf("%d\n", b);


    int array[] = {1,2,3,4,5};
    int *pointer;
    pointer = array;
    printf("array: %p p: %p\n", array, pointer);
    printf("array[2]: %d == pointer[2]: %d \n", array[2],pointer[2]);

    arrayMod(array);
    printf("%d\n", array[3]);

    //array notation
    printf("%d\n", array[4]);
    //pointer notation
    printf("%d\n", *(pointer + 4));


}

void modify(int *a, int *b){
    *a = *a + 5;
    *b = *b + 5;
}
void arrayMod(int *arrayp){
    arrayp[3] = 100;
}

//Take the memory address of b and assign it to pointer p (p = &b)
// Declare a pointer that will contain the memory address to int value (int *p)
//Each variable that stores a variable has a memory address
//Pointers stores memory address for a certain value.
//Memory address: Is a set of numbers that that refers to a certain value in the memory.

//DEREFERENCING a pointer: Means extracting the actual value being represented by the memory address
//in the pointer. (print("%d", *p)) we use a star(*)

//(p) ==> referencing p ; meaning contains the memory address BUT when we have already declared p
//(*p) ==> contain the actual value stored on that memory address.

//NOTE: You can change the value of variable through is memory address. See line 19. Since p is storing
//memory address of b , we can go behind the memory address of b through p and then change what's there.
//This means that the variable with this memory address will be changed because whats behind the address
//was changed

//NOTE: Pointers also have their memory address.
//NOTE: Array do not need & to get their memory address because by default arrays behave like pointer
//See the line 32 and 33. Since array behave like pointers themselves means that their variable represents
//memory address. So if i assign the memory address of array to pointer , both will have the same memory
//address. So now pointer will behave like an array.

//If Two or more variables has the same memory address and method that is applied to one variable also applies to another
//On the line 44 go on the memory address and then shift to forth and then take the value their
//TIP: For an array each element of that array also have their own memory address , So when we say array[4] we mean that go on the memory
//address of the array , inside it shift 4 times from the first memory address of the element. BUT in arrays we don't * in dereferencing.
//unless we use pointer notation

//Array notation = array[2] or pointer[2]
//Pointer notation = *(array + 2) or *(pointer + 2)
//That calculation inside the brackets is called 'POINTER ARTHMETIC'

//When declaring string you must also add the space for null terminator '\0'


//The difference between array and pointers is that the memory address of array is constant you can't change it while that of
//pointer can be changed
// pointer = array (✔️)
// array = pointer (❌)
