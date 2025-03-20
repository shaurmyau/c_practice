#include <stdio.h>
#include <string.h>

struct Vehicle {
    char brand[50];
    char model[100];
    int year;
    char engineType[10];
};

int main() {
    int n;
    struct Vehicle vehicles[100];

    printf("Введите количество транспортных средств: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char engineTypeStr[20];
        printf("Введите марку, модель, год выпуска и тип двигателя для транспортного средства %d: ", i + 1);
        scanf("%s %s %d %s", vehicles[i].brand, vehicles[i].model, &vehicles[i].year, vehicles[i].engineType);
    }

    for (int i = 0; i < n; i++) {
        printf("\nVehicle: %s %s\n", vehicles[i].brand, vehicles[i].model);
        printf("Year: %d\n", vehicles[i].year);
        printf("Engine Type: %s\n", (vehicles[i].engineType));
    }

    return 0;
}