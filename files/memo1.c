#include<stdio.h>
#include<stdlib.h>

int main(){

    int *arr;
    int i;

    // Allocate memory for 3 integers
    arr = (int *) malloc(3 * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter 3 integers: \n");

    for(i=0; i<3; i++){
        scanf("%d", &arr[i]);
    }

    //Resize the memory to hold 5 integers
    arr = (int *) realloc(arr, 5 * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed \n");
        return 1;
    }

    printf("Enter 2 integers: \n");

    for(i=3; i<5; i++){
        scanf("%d", &arr[i]);
    }

    printf("All values are: ");

    for(i=0; i<5; i++){
        printf("%d", arr[i]);
    }

    free(arr);


    return 0;
}
