#include<stdio.h>

int main(void){

    char name[50];

    fputs("Hello world \n", stdout);

    printf("Enter your name: ");
    fgets(name, 45, stdin);

    printf("You entered: %s", name);

return 0;
}

//There are different ways of getting user input in C by:
// -> scanf()
// -> gets()
// -> fgets() with stdin stream
