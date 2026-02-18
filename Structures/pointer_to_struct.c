#include<stdio.h>
#include<string.h>

struct profile{
    char name[20];
    int age;
    int year;
};

int main(void){

    struct profile me;
    struct profile *ptr;

    ptr = &me;
    (*ptr).age = 15;
    ptr->year = 2030;
    strcpy(ptr->name,"TOP GUN");

    printf("I am %s i am %d years old in %d", ptr->name, ptr->age, ptr->year);

return 0;
}
