#include<stdio.h>
#include<string.h>

int main(){

    int c;
    printf("Enter a text: ");

    for(int i=1; i<=4; i++){
        c = fgetc(stdin);
        printf("%c",c);
    }


    printf("%c",c+1);

return 0;
}
