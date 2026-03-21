#include<stdio.h>
#include<string.h>

int main(){

    char profile[50];
    char buffer[30];
    char school[50] = "RCA";
    char home[50] = "Kayonza";
    char me[] = "18 12.75";
    int age;
    float height;


    sprintf(profile, "I am a student at %s and i come from %s.",school,home);
    printf("The stored value is: %s\n", profile);

    sscanf(me,"%d %f",&age,&height);
    printf("Age: %d, Height: %.2f", age,height);




return 0;
}
