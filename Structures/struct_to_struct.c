#include<stdio.h>
#include<string.h>

struct profile{
        char home[];
        char name[30];
};
struct school{
    int grade;
    struct profile pfp;
    int age;
};

int main(void){

    struct school y1;

    y1.grade = 9;
    y1.age = 17;
    strcpy(y1.pfp.name,"honore");
    printf("My name is %s i am %d i am in %d",y1.pfp.name,y1.age,y1.grade);

return 0;
}
