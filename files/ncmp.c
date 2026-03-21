#include<stdio.h>
#include<string.h>


int main(void){

    char word1[15];
    char word2[15];

    strcpy(word1, "appleextra");
    strcpy(word2, "appleExtra");

    if(strncmp(word1,word2, 5) == 0){
        printf("%s is Equal to %s for the first 5 chars", word1,word2);
    }
    else if(strncmp(word1,word2, 5)<0){
        printf("%s is less than %s", word1,word2);
    }
    else{
        printf("%s is greater than %s", word1,word2);
    }

return 0;
}
