#include<stdio.h>
#include<stdlib.h>

void main(){

    int *number;
    int size = 2;
    number = malloc(sizeof(int) * size);

    int input = 0, i = 0;
    do{

        if(i == size){
            size += 2;
            number = realloc(number, sizeof(int) * size);
            printf("The size is now increased by 2 \n");
        }

        printf("Enter the number(-1 to q): ");
        scanf("%d", &input);
        if(input != -1){
            number[i] = input;
            i++;
        }
    }while(input != -1);

    for(int j=0; j<i; j++){
        printf("number[%d] = %d \n", j, number[j]);
    }


    free(number);

}
//realloc():This function creates a new allocation and then take all values from the previous allocation and put them in.
