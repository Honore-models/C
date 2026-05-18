#include<stdio.h>

enum Day{
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };

int isWeekend(enum Day day){

    if(day == Saturday || day == Sunday){
        return 1;
    }

    return ;
}

int main(){

    enum Day day = Monday;
    printf("%d",isWeekend(day));

return 0;
}
