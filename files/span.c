#include<stdio.h>
#include<string.h>

int main(){

    char name[10] = "ronore";
    char set[10] = "onh";
    int count;

    count = strspn(name,set);
    printf("The number of chars that match is: %d \n", count);

    count = strcspn(name,set);
    printf("The number of chars that don't match is: %d\n", count);



return 0;
}
