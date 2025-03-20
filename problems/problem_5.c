#include <stdio.h>
#include <string.h>

union Data {
    int intValue;
    float floatValue;
    char strValue[100];
};

int main() {
    int choice;
    union Data data;

    printf("Выберите тип данных (1 - целое число, 2 - вещественное число, 3 - строка): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Введите целое число: ");
            scanf("%d", &data.intValue);
            printf("Integer: %d\n", data.intValue);
            break;
        case 2:
            printf("Введите вещественное число: ");
            scanf("%f", &data.floatValue);
            printf("Float: %.2f\n", data.floatValue);
            break;
        case 3:
            printf("Введите строку: ");
            scanf("%s", data.strValue);
            printf("String: %s\n", data.strValue);
            break;
        default:
            printf("Неверный выбор!\n");
            break;
    }

    return 0;
}