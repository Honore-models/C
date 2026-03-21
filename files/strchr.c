#include<stdio.h>
#include<string.h>

int main(){

    char word[10] = "Hello";
    char sentence[] = "Hello World";
    char *ptr1;
    char *ptr2;

    ptr1 = strchr(word, 'o');
    printf("The index of the first occurrence of '0' is %d\n", ptr1 - word);

    ptr2 = strstr(sentence, "World");
    printf("The index of the first Letter of World is %d\n", ptr2 - sentence);


return 0;
}
