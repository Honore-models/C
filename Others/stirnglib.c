#include<stdio.h>
#include<string.h>
//This is a library that give us methods to work with strings.
//strcat(), strcmp(), strlen().


int main(){

    char school[] = "coding";
    int length = strlen(school);
    //NOTE: This function does not include the node terminator in the length of string
    printf("%d",length);


    char s1[] = "The first sentence ";
    char s2[] = "The second sentence.";
    strcat(s1,s2);
    //This will take the second string and append to the end of the first
    printf("%s\n", s1);


    char s3[] = "My name is HNR.";
    char s4[] = "My name is HNR.";

    if(strcmp(s3,s4)== 0) printf("s3 and s4 are equal");
    else printf("s3 and s4 are not equal");

    //This method is used to compare if the strings are equal if they are equal it returns 0 else something

    //DID YOU KNOW! On the use of {} you don't need to use them when you are going to execute only one line of code. Align the lines


return 0;
}
