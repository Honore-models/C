#include<stdio.h>
#include<string.h>

enum Colors{
    Red,
    White,
    Green,

};

int main(){

    char input[20];
    int color = -1;
    char enum_colors[][10] = {"Red", "White", "Green"};

    printf("Enter your color: \n");
    scanf("%s", input);

    for(int i=0; i<3; i++){
        if(strcmp(input, enum_colors[i]) == 0){
            color = i;
            break;
        }

    }
    if(color == -1){
        printf("Invalid Color");
    }else{
        printf("Enum value for your color is: %d", color);
    }

    return 0;
}
