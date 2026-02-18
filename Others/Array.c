#include<stdio.h>

int main(){

    int grades[] = {90,84,75,89,93};
    grades[5] = 100;


    //If you try to assign a value to an index that do not exist, automatically that index will be created and then will be assigned
    //to that value.
    //And when you try to access a non existing index , you will not get error but 0 value showing

    //Character arrays.
    //In C Character arrays is the normal string we know. When we know that we are creating a string variable the truth is that
    //creating the array. How it works: When we create a string C language take that string you created and split it into the array
    //of each characters.

    char school[] = "My school";// Array

    for(int i = 0; i<10 ; i++){

            if(school[i] == '\0'){
                printf("school[%d] = nt \n",i);
            }
            else{
                printf("school[%d] = %c\n", i, school[i]);
            }

    }
    printf("The whole string: %s", school);


    //For every char array there is the last index that is occupied by "node terminator" "\0" char seen as empty " "
    //Node terminator is the one that is responsible for determining the end of the string

    printf("\n");
    printf("\n");

    float total = 0;
    for(int i=0; i<=5;i++){
        total += grades[i];
        printf("grades[%d] = %d \n", i, grades[i]);


    }
printf("\n");
printf("Total: %.1f\n", total);
printf("Average: %.2f", total/5);




return 0;
}
