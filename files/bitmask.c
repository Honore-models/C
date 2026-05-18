#include<stdio.h>

enum FileAccess{

    Read = 1,
    Write = 2,
    Execute = 4,
};

int main(){


    int permission;
    permission = Read | Write;

    printf("Permission value: %d\n", permission);

    if(permission & Execute){
        printf("Permission Exist\n");
    }else{
        printf("Permission doesn't exist.\n");
    }

return 0;
}
