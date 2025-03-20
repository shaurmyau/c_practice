#include <stdio.h>

int main() {
    int earth_mass;

    printf("Введите процент содержания кислорода: ");
    scanf("%d", &earth_mass);
    float moon_mass = earth_mass / 6.0;
    printf("%f", moon_mass);
    return 0;
}
