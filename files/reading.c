#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "r");
    if(file == NULL){
        printf("An error occurred while reading the file");
        return 1;
    }

    int ch;
    while((ch = fgetc(file)) != EOF){
        if(ch != '\r') {   // skip carriage return
            putchar(ch);
        }
    }

    fclose(file);
    return 0;
}
