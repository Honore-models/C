#include<stdio.h>
#include<string.h>

int main(void){

    char word1[10];
    char word2[10];

    strcpy(word1,"apple");
    strcpy(word2,"Apple");

    if(strcmp(word1,word2)== 0){
        printf("%s is Equal to %s", word1,word2);
    }
    else if(strcmp(word1,word2)<0){
        printf("%s is less than %s", word1,word2);
    }
    else{
        printf("%s is greater than %s", word1,word2);
    }

return 0;
}
