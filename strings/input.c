#include<stdio.h>

int main(){

    char fname[11];
    char lname[16];
    char name[50];

    //printf("Enter your names (firstname,lastname): ");
    //scanf("%[^,],%s\n", fname, lname);

    //printf("Welcome %s %s\n", fname, lname);

    printf("Enter your school name: ");
    gets(name);

    printf("You study at %s\n", name);

return 0;
}

//TIP: If in scanf you have ("%s %s") the expected input also must be in the same format "name name"
// "%s,%s"  ==>  "name,name"

//scanf() function escapes the spaces but gets don't
//Gets reads the input until the enter in hit


