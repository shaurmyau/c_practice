#include <stdio.h>


struct Employee {
    char name[50];
    char position[100];
    float salary;
};

int main() {
    int n;
    struct Employee employees[100];

    printf("Введите количество сотрудников: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Введите имя, должность и зарплату для сотрудника %d: ", i + 1);
        scanf("%s %s %f", employees[i].name, employees[i].position, &employees[i].salary);
    }

    for (int i = 0; i < n; i++) {
        printf("\nName: %s\n", employees[i].name);
        printf("Position: %s\n", employees[i].position);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}