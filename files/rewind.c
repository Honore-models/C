#include<stdio.h>
#include<string.h>

int main(){

    int c;
    char profile[30] = "I am a student";
    printf("Enter a text: ");
    for(int i=1; i<15; i++){
        c = fgetc(stdin);
        printf("%c",c);
    }

    printf("%c",c);

return 0;
}
