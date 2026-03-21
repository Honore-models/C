#include<stdio.h>

int main(){

    char line[100];
    FILE *file;

    file = fopen("honore.txt", "r");

    while(fgets(line, 100, file)){
        printf("%s", line);
    }

return 0;
}

