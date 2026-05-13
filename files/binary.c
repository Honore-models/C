#include<stdio.h>

int main(){

    FILE *bin;
    int num = 10;
    int num2;

    bin = fopen("C:\\Users\\HP\\Desktop\\LANGUAGES\\C\\program.bin", "wb+");

    if(bin == NULL){
        printf("Opening file failed.");
        return 1;
    }

    fwrite(&num, sizeof(int), 1, bin);
    rewind(bin);
    fread(&num2, sizeof(int), 1, bin);

    printf("The values read is %d", num2);
    fclose(bin);

    return 0;
}
