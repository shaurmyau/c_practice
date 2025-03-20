#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int n;
    struct Student* students;

    printf("Введите количество студентов: ");
    scanf("%d", &n);

    students = (struct Student*)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Mem err\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Введите имя, возраст и GPA для студента %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < n; i++) {
        printf("\nName: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("GPA: %.2f\n", students[i].gpa);
    }

    free(students);

    return 0;
}