#include<stdio.h>

enum Gender{
    Male,
    Female,
    Other
};

int main(){

    int choice;

    printf("Enter your choice: \n");
    printf("0 for Male\n");
    printf("1 for Female\n");
    printf("2 for Other\n");

    scanf("%d", &choice);

    switch(choice){

    case Male:
        printf("Your gender is Male");
        break;

    case Female:
        printf("Your gender is Female");
        break;

    case Other:
        printf("Your gender is Other");
        break;

    default:
        printf("Invalid gender");
    }



return 0;
}
