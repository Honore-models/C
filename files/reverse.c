#include<stdio.h>

void reverse(int arr[], int start, int end){

    if(start >= end){
        return;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverse(arr, start+1, end-1);

}

int main(){

    int arr[6] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        printf("Before reverse arr[%d] = %d \n",i,arr[i]);
    }

    reverse(arr,0,4);

    for(int i=0; i<5; i++){
        printf("After reverse arr[%d] = %d\n",i,arr[i]);
    }

    return 0;
}
