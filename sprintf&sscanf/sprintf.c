#include <stdio.h>

int main(){

    char profile[50];
    int age = 18;
    char name[10] = "Honore";

    sprintf(profile, "My name is %s and i am %d years old", name, age);
    printf(profile);


return 0;

}
