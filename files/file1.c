#include<stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("honore.txt", "w");

    if(ptr == NULL){
        printf("Error occurred in file");
        return 1;
    }
    fprintf(ptr, "I am honore at RCA");

    fclose(ptr);

return 0;
}
