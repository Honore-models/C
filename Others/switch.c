#include<stdio.h>
int main(){

    int day;
    printf("Enter the day: ");
    scanf("%d", &day);

    switch(day){

    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid day\n");

    }

    printf("The end if the switch");

    //Switch case requires break statement to close the execution of other cases. When there is no break statement the switch will keep on executing
    //other statements . On the default case we don't need break because it is at the end.


return 0;

}
