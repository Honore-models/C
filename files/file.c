
#include<stdio.h>
#include<stdlib.h>

int main(){

    int num;
    FILE *fptr;

    if((fptr = fopen("C:\\Users\\HP\\Desktop\\LANGUAGES\\C\\file.txt", "r")) == NULL){
       printf("Error");
       exit(1);
    }

    fscanf(fptr, "%d", &num);

    printf("Value of n = %d", num);
    fclose(fptr);

    return 0;


return 0;
}
