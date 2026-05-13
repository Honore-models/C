#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int n1, n2, n3;
}threeNum;

int main(){

    int n;
    threeNum num;
    FILE *fptr;

    if((fptr = fopen("C:\\Users\\HP\\Desktop\\LANGUAGES\\C\\program.bin", "rb")) == NULL){
       printf("Error");
       exit(1);
    }

    for(n = 1; n<5; ++n){
        fread()
    }

    fscanf(fptr, "%d", &num);

    printf("Value of n = %d", num);
    fclose(fptr);

    return 0;


return 0;
}
