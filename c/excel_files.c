#include <stdio.h>
#include <stdlib.h>
#define maxx 5

struct Students {
    char Name[10];
    int Mark;
};

void swap(struct Students *a, struct Students *b) {
    struct Students temp = *a;
    *a = *b;
    *b = temp;
}

void main() {
    struct Students student[maxx];

    for (int i = 0; i < maxx; i++) {
        printf("Enter %d st student name: ", i + 1);
        scanf("%s", student[i].Name);
        printf("Enter %d st student mark: ", i + 1);
        scanf("%d", &student[i].Mark);
    }

    for (int i = 0; i < maxx - 1; i++) {
        for (int j = 0; j < maxx - i - 1; j++) {
            if (student[j].Mark < student[j + 1].Mark) {
                swap(&student[j], &student[j + 1]);
            }
        }
    }

    FILE *ptr = NULL;
    ptr = fopen("students.txt", "w");

    if (ptr == NULL) {
        printf("Error! opening file");
        exit(0);
    }

    fprintf(ptr, "data of five students\n");
    fprintf(ptr, "Name      Mark\n");
    for (int i = 0; i < maxx; i++) {
        fprintf(ptr, "%-10s %d\n", student[i].Name, student[i].Mark);
    }

    fclose(ptr);

    printf("Data filled successfully\n");

}
