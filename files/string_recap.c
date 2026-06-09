#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int n;
    char names[10][31];

    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); // remove leftover '\n'

    for (int i = 0; i < n; i++) {

        printf("Enter student %d\n", i + 1);

        fgets(names[i], 31, stdin);

        names[i][strcspn(names[i], "\n")] = '\0';
    }

    srand(time(NULL));

    int choice = rand() % n;

    printf("%s, would you please answer the next question?\n", names[choice]);

    return 0;
}
