#include <stdio.h>

int main() {
    int tmp;

    printf("Введите температуру в С: ");
    scanf("%d", &tmp);

    if (tmp <= 120 && tmp >= -150) {
        printf("Подходит\n");
    } else {
        printf("Не подходит.\n");
    }

    return 0;
}
