#include<stdio.h>
#include<string.h>

int main(){

    char word1[5] = "Hello, ";
    char word2[10] = "World";

    strcat(word1,word2);
    printf(word1);

return 0;
}
