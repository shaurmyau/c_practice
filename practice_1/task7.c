#include <stdio.h>

int main() {
    float Ghz;

    printf("Введите частоту в ГГц: ");
    scanf("%f", &Ghz);

    if (Ghz <= 3.5 && Ghz >= 2.5) {
        printf("Подходит\n");
    } else {
        printf("Не подходит.\n");
    }

    return 0;
}
