#include<stdio.h>
#include<string.h>

typedef struct{
    char make[20];
    int model_year;
    int id_type; /* 0 for id_num, 1 for VIN */
    union{
        int id_num;
        char VIN[10];

    }id;

}vehicle;

int main(void){

    vehicle car1;
    strcpy(car1.make, "Ford");
    car1.model_year = 2007;
    car1.id_type = 0;
    car1.id.id_num = 123098;
    printf("Car %s, %d", car1.make, car1.model_year);

    if (car1.id_type == 0) {
        printf("Car ID Number: %d\n", car1.id.id_num);
    } else if (car1.id_type == 1) {
        printf("Car VIN: %s\n", car1.id.VIN);
    }



return 0;
}
