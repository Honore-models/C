#include<stdio.h>
#include<string.h>

struct Student{
    char name[50];
    int age;
};

void display(struct Student std){
    printf("Name: %s\n", std.name);
    printf("Age: %d\n", std.age);
}

int main(void){

    struct Student s1 = {"Rocky", 15};
    display(s1);


return 0;
}
