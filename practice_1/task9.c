#include <stdio.h>

int main() {
    double T;
    int mins;
    printf("Введите время в секундах: ");
    scanf("%lf", &T);
    mins = T / 60;
    T -= (mins * 60);
    printf("%d", mins);
    printf(" минут и ");
    printf("%lf", T);
    printf(" секунд\n");

    return 0;
}
