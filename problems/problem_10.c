#include <stdio.h>
#include <string.h>

struct Course {
    char name[50];
    int credits;
    char professor[100];
};

int main() {
    int n;
    struct Course courses[50];

    printf("Введите количество курсов: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Введите название курса, количество кредитов и имя преподавателя для курса %d: ", i + 1);
        scanf("%s %d %s", courses[i].name, &courses[i].credits, courses[i].professor);
    }

    for (int i = 0; i < n; i++) {
        printf("\nCourse: %s\n", courses[i].name);
        printf("Credits: %d\n", courses[i].credits);
        printf("Professor: %s\n", courses[i].professor);
    }

    return 0;
}