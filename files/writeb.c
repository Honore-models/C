#include <stdio.h>

struct student {
    char name[50];
    int height;
};

int main() {

    struct student stud1[5], stud2[5];
    FILE *fptr;
    int i;

    /* ================= INPUT ================= */
    for (i = 0; i < 5; i++) {

        printf("Enter name: ");
        fgets(stud1[i].name, sizeof(stud1[i].name), stdin);

        printf("Enter height (integer): ");
        scanf("%d", &stud1[i].height);

        /* clear leftover newline after scanf */
        getchar();
    }

    /* ================= WRITE TO FILE ================= */
    fptr = fopen("file.bin", "wb");
    if (fptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(stud1, sizeof(stud1), 1, fptr);
    fclose(fptr);

    /* ================= READ FROM FILE ================= */
    fptr = fopen("file.bin", "rb");
    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(stud2, sizeof(stud2), 1, fptr);
    fclose(fptr);

    /* ================= OUTPUT ================= */
    printf("\n--- Student Data ---\n");

    for (i = 0; i < 5; i++) {
        printf("Name: %sHeight: %d\n",
               stud2[i].name,
               stud2[i].height);
    }

    return 0;
}
