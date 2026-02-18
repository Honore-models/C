#include<stdio.h>
#include<string.h>

struct Honore // Class
{
    int x;
    int y; // Members
};

typedef struct{
    char name[20];
    char home[12];

} profile;

typedef struct{
    int age;
    int year;

} credentials;

typedef struct{
    int a;
    int b;

} Year1C;



void main(){

    struct Honore num1;
    num1.x = 12;
    num1.y = 20;
    printf("(%d,%d)\n", num1.x,num1.y);

    struct Honore num2 = {20,30};
    printf("(%d,%d)\n", num2.x,num2.y);

    struct Honore num3 = {.x = 100 , .y = 200};
    printf("(%d,%d)\n", num3.x,num3.y);

    credentials cre1 = {19, 2026};

    printf("%d %d \n", cre1.age, cre1.year);

    profile name;
    strcpy(name.name, "Honore");
    strcpy(name.home, "Kayonza");



    printf("%s %s \n", name.name, name.home);


    Year1C marks = {90,87};
    printf("(%d,%d)\n", marks.a,marks.b);


}

//struct is like C objects. they are used to store related data.
//The word "Honore" is called the class. Take it as the name of the class that will store students
//'int x' and 'int y'(Members) . The word "num1" is called the variable. Take it as desks to which students
//will sit on.

// In c you can assign arrays to values but you cannot re-assign value to it. That's why when we are re assigning values to
// to chars we use strcpy() which copies char by char.
