#include<stdio.h>
#include<string.h>
#define MAX_PLAYER 100
#define STR_LENGTH 30

int main(){

    char player_name[31];
    char names[MAX_PLAYER][STR_LENGTH];
    int ages[MAX_PLAYER];
    char genders[MAX_PLAYER];
    int n, player_index;

    printf("Enter number of players you want: ");
    scanf("%d", &n);
    getchar();

    printf("Enter %d player's info: \n", n);

    for(int i=0; i<n; i++){
        scanf("%s %d %c",names[i],&ages[i],&genders[i]);

    }

    printf("The list of players are:\n\n");
    printf("Name      Age      Gender\n\n");

    for(int i=0; i<n; i++){
        printf("%s     %d       %c\n",names[i],ages[i],genders[i]);
    }

    printf("Enter the Student you want to find teammate for: ");
    scanf("%s", player_name);

    for(int i=0; i<n; n++){

        if(names[i] == player_name){
            player_index = i;
            break;
        }else{
            player_index = -1;
        }
    }

    printf("The index for the player is %d", player_index);

    return 0;
}
