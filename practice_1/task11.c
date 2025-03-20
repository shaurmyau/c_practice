#include <stdio.h>

int main() {
    float O2;

    printf("Введите процент содержания кислорода: ");
    scanf("%e", &O2);

    if (O2 >= 15) {
        printf("Подходит\n");
    } else {
        printf("Не подходит.\n");
    }

    return 0;
}
