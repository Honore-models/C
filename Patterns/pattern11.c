#include<stdio.h>

int main(void){

        for(int i=1; i<=10; i++){
        for(int j=10; j>=i+1; j--){
            printf(" ");
        }
        for(int k=0; k<(2*i-1);k++){
            printf("%c",'A'+k);
        }
        printf("\n");
    }

return 0;
}
