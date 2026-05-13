#include<stdio.h>

struct student{
    char name[30];
    int age;
    int roll_no;
    float marks;
};

void print(char name[], int age, int rollNo, float marks){
    printf("%s %d %d %.2f", name,age,rollNo, marks);
}

int main(){

    struct student st1 = {"Mahoro Peace", 17, 201912, 87.8};
    print(st1.name, st1.age, st1.roll_no, st1.marks);

    return 0;
}

