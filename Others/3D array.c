#include<stdio.h>
#define LAYERS 3
#define ROWS 3
#define COLUMNS 4

void main(){

    int array[LAYERS][ROWS][COLUMNS] = {
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}

    },
    {
        {2,4,6,8},
        {10,12,14,16},
        {18,20,22,24}

    },
    {
        {1,2,3,4},
        {5,6,7,8},
        {5,3,1,2}
    }

    };

    for(int i=0; i< LAYERS; i++){
        for(int j=0; j< ROWS; j++){
            for(int k=0; k<COLUMNS; k++){
                printf("array [%d][%d][%d] = %d\n", i,j,k,array[i][j][k]);
            }
            printf("\n");
        }


        printf("The end of the layer");
        printf("\n");
        printf("\n");

    }


}
