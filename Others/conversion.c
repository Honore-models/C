#include <stdio.h>

int main(){


    int step, stop,init;

    do{
        printf("Enter the initial value (m): ");
        scanf("%d", &init);
        if(init <= 0){
            printf("Must be > 0 \n");
        }
    }while(init <= 0);

    do{
        printf("Enter the step value: ");
        scanf("%d", &step);
        if(step <= 0){
            printf("Must be > 0 \n");
        }
    }while(step <= 0);

    do{
        printf("Enter the stop value(m): ");
        scanf("%d", &stop);
        if(stop <= 0){
            printf("Must be > 0 \n");
        }
    }while(stop <= 0);
    printf("\n");
    printf(" Meters           Feet\n");
    printf(" ------           ------ \n");

    for(float conv = init; conv <= stop; conv += step){
        printf("%6.3f m  -->  %9.3f feet\n", conv, conv * 3.28084 );
        //Here we can also use -6.3f to make the space on the left
    }



return 0;
}
