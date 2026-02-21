 #include<stdio.h>

 union profile{
    int age;
    char name[20];
    float salary;
 };

 int main(void){

     union profile me;
     me.age = 18;
     printf("%d", me.age);

 return 0;
 }

 //Union is a C data type that is used to store different variables under the same memory memory to ensure
 //efficient usage of memory.

 //In unions one variable can use the memory at time because all members of the union share the same memory
 //The memory created is the memory for the biggest data type of the members
 // union size = size of largest member ensures that every possible value can fit.
