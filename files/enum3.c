#include<stdio.h>

enum TrafficLight{
    Red,
    Yellow,
    Green
};

int main(){

   enum TrafficLight light;

   light = Red;

   switch(light){

    case Red:
        printf("Stop");
        break;

    case Yellow:
        printf("Ready");
        break;

   }


return 0;
}
