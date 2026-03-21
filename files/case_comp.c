#include<stdio.h>
#include<string.h>

int main(void){

    char word1[10] = "Apple";
    char word2[10] = "apple";

    if(strcasecmp(word1,word2) == 0){
        printf("Both are equal(Ignoring case)");
    }else{
        printf("They are not equal");
    }

return 0;
}
