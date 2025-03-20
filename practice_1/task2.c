#include <stdio.h>

int main() {
    int range;

    printf("Введите расстояние в км: ");
    scanf("%d", &range);

    if (range <= 500) {
        printf("Доедет\n");
    } else {
        printf("Не доедет.\n");
    }

    return 0;
}
