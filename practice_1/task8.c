#include <stdio.h>

int main() {
    int mass;

    printf("Введите массу груза: ");
    scanf("%d", &mass);

    if (mass % 4 == 0) {
        printf("Подходит\n");
        printf("В каждом отсеке %d", mass / 4);
    } else {
        printf("Не подходит.\n");
    }

    return 0;
}
