#include<stdio.h>

int main(){

    char *days[7];
    char day[10];

    days[0] = "Monday";
    days[1] = "Tuesday";
    days[2] = "Wednesday";
    days[3] = "Thursday";
    days[4] = "Friday";
    days[5] = "Saturday";
    days[6] = "Sunday";

    for(int i=0; i<7; i++){
        printf("The day %d is: %s \n",i,days[i]);
    }






return 0;
}

//When we want to create array of string we use pointer method to create array of pointers
//So that each pointer element can reference to a string

//Normal ways of creating arrays can store only one word not many but this approach can store
//multiple words
