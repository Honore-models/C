#include<stdio.h>


int get_max(int a, int b);//.1
float add(float x, float y);
double power(double a, double b);
void numbers(int c , int d);

void main(){

    int max = get_max(12,15);
    printf("The max is: %d\n", max);

    float sum = add(123.324, 95.543);
    printf("The sum is: %f\n", sum);

    double raise = power(5.8,9);
    printf("Power = %.3lf\n", raise);

    numbers(12,34);

    int number = 123;
    printf("The memory address of number is: %p\n", number); // We use %p as the pointer placeholder.
    int array[] = {32,45,62,11,43,95};
    printf("The memory address of array is: %p", array);


}

int get_max(int a, int b){

    if(a>b) return a;      //.2
    else return b;
}

float add(float x, float y){
    return x + y;
}

double power(double a, double b){

    double result = 1;
    for(int i= 1; i<= b; i++){
        result *= a;
    }
    return result;

}
void numbers(int c , int d){
    printf("First: %d, second: %d \n", c,d);
}








//Function declaration is just creating a function without a body. (.1)
//Function definition is creating the body of the function. (.2)
//int max(int a, int b) ==> function declaration.
//{function body} ==> Function definition.
//In C the format for creating  function is that you first declare it at the top of the main function and
//then you define it later at the end of main function

//VOID functions do not return any thing
//? When we declare a variable and then we give it a value, whenever we will be using that variable,
//the variable go as the MEMORY ADDRESS of the stored value

//NOTE: For arrays whenever we pass the variable holding the array, we will not be passing the actual value(array)
//We will be passing the memory address to that array(value). BUT this does not apply to normal variables
//such as int,char and others that are not the array.
