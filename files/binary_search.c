#include<stdio.h>

int binarySearch(int arr[], int size, int key){

    int left = 0, right = size -1;

    while(left <= right){

          int mid = (left + right)/2;

          if(arr[mid] == key){
            return mid;

          }else if(arr[mid] < key){
              left = mid + 1;
          }else{
            right = mid - 1;
          }
    }
    return -1;
}

int main(){

    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;

    printf("Enter your target: ");
    scanf("%d", &target);

    int index = binarySearch(arr,size,target);

    if(index != -1){
        printf("The target is  found at index %d", index);
    }else{
        printf("The target is not found");
    }

   return 0;
}
