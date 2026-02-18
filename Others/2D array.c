#include<stdio.h>

void main(){



    int array[3][4] = {{1,2,3,5},
                       {6,7,8,9},
                       {10,11,12,13}};


    for(int i=0; i<3; i++){
        for(int j=0; j<4;j++){

            printf("array[%d][%d] = %d\n", i,j, array[i][j]);

        }

        printf("\n");

    }


}
