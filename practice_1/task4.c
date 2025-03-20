#include <stdio.h>

int main() {
    int inputDate;

    int YYYYMMDD = 20250210;
    printf("Введите дату в формате YYYYMMDD: ");
    scanf("%d", &inputDate);

    if (inputDate > YYYYMMDD) {
        printf("Дата находится в будущем.\n");
    } else {
        printf("Дата не находится в будущем.\n");
    }

    return 0;
}
