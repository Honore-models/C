#include<stdio.h>

int main(){

    FILE *bin;
    int num = 10;

    bin = fopen("C:\\Users\\HP\\Desktop\\LANGUAGES\\C\\program.bin", "wb");

    if(bin == NULL){
        printf("Opening file failed.");
        return 1;
    }

    fwrite(&num, sizeof(int), 1, bin);
    fclose(bin);

    return 0;
}
