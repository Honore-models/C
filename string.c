#include <stdio.h>

int main()
{

    char name[21];

    printf("%c", "hello"[1]);

    printf("Enter your name: ");
    scanf("%[honore]", name);
    printf(name);

    return 0; 
}

// By default %s escapes the spaces , when you have the spaces in your input it stops when it reaches it.
