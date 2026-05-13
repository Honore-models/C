#include<stdio.h>

struct charset{
    char s;
    int i;
};

void keyValue(char *s, int *i){
    printf("Enter s and i: ");
    scanf("%c %d",s,i);
}

int main(){

    struct charset cs;
    keyValue(&cs.s, &cs.i);
    printf("%c %d",cs.s,cs.i);

    return 0;
}

