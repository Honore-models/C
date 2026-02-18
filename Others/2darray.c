#include<stdio.h>
#define ROWS 3
#define COLS 4

void main(){

    int array[ROWS][COLS] = {{1,2,3,4},
                             {1,2,3,4},
                             {2,4,6,8}};

    printf("%d \n", array[1][3]);

    for(int i = 0; i< ROWS; i++){
        for(int j = 0; j< COLS; j++){
            printf("array[%d][%d] = %d \n", i,j, array[i][j]);
        }
    }

}
