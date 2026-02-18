#include<stdio.h>
#include<string.h>

struct human{
        int age;
        char name[50];
        int grade;
};

typedef struct{
    char name[30];
}profile;

int main(void){

    struct human h1 = {19,"Honore",2};
    printf("The human details are age: %d , name: %s grade: %d", h1.age, h1.name, h1.grade);

    printf("\n");
    profile p1;
    strcpy(p1.name, "Mugisha");

    printf("The name is %s", p1.name);


return 0;
}
