#include<stdio.h>

typedef int age;
typedef char name;

void main(){
    age person1 = 10;
    age person2 = 18;
    age person3 = 25;

    name person4[] = "Honore";
    name person5[] = "Fablice";

    printf("person1 age: %d \n",person1);
    printf("person2 age: %d \n",person2);
    printf("person3 age: %d \n",person3);
    printf("\n");
    printf("person4 name: %s \n",person4);
    printf("person5 name: %s \n",person5);

}
// typedef is used to create another name that will work as a certain type of data in C
// typedef int age : this means that whenever we will use age we will be using int keyword.
// This is useful because it makes codes clear and understood
