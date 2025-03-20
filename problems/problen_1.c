#include <stdio.h>


struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int n; 
    struct Student students[100];

    printf("Введите количество студентов: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Введите имя, возраст и средний балл для студента %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < n; i++) {
        printf("\nName: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("GPA: %.1f\n", students[i].gpa);
    }

    return 0;
}
