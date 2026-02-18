#include<stdio.h>
#include<string.h>
#include<ctype.h>
//This is the library that enable us to analyze characters
//isupper(), islower(), tolower(), toupper()


int main(){

    char test[] = "IsTudYatRca";

    int length = strlen(test);

    /*for(int i=0; i<length; i++){
        printf("%c: ", test[i]);
        if(isupper(test[i])) printf("Upper \n");
        else if(islower(test[i])) printf("Lower \n");

    }*/

    //We can use tolower() or toupper() functions to change the char either to lower or to uppercase

    char upper[] = "HELLO";
    char lower[] = "top";
    int upperLen = strlen(upper);
    int lowerLen = strlen(lower);

    for(int i = 0; i<upperLen; i++){
        upper[i] = tolower(upper[i]);
    }
    printf("The lowerCase word: %s \n", upper);


    for(int i = 0; i<lowerLen; i++){
        lower[i] = toupper(lower[i]);
    }
    printf("The UpperCase word: %s", lower);




return 0;
}
