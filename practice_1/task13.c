#include <stdio.h>

int main() {
    int count;

    printf("Введите количество астронавтов: ");
    scanf("%d", &count);

    if (count % 2 == 0 && count >= 1) {
        printf("Подходит\n");
    } else {
        printf("Не подходит.\n");
    }

    return 0;
}
