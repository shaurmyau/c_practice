#include <stdio.h>

int main() {
    int grad;

    printf("Введите грдус наклона стабилизатора: ");
    scanf("%d", &grad);

    if (-180 <= grad && grad <= 180) {
        printf("Подходит\n");
    } else {
        printf("Не подходит.\n");
    }

    return 0;
}
