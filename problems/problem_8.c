#include <stdio.h>
#include <string.h>

union Grade {
    char grade[20];
};

int main() {
    int n;
    union Grade grades[100];

    printf("Введите количество оценок: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Введите оценку (число или буква) для студента %d: ", i + 1);
        scanf("%s", grades[i].grade);
    }

    for (int i = 0; i < n; i++) {
            printf("Grade: %s\n", grades[i].grade);
    }
    return 0;
}