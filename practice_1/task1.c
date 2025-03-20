#include <stdio.h>

int main() {
    int mass;

    printf("Введите массу в кг: ");
    scanf("%d", &mass);

    if (mass > 60 && mass < 90) {
        printf("Подходит\n");
    } else {
        printf("Не подходит.\n");
    }

    return 0;
}
