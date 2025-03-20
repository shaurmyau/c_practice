#include <stdio.h>
#include <string.h>

struct Weather {
    float temperature;
    float humidity;
    char condition[15];
};

int main() {
    struct Weather currentWeather;

    printf("Введите температуру, влажность и состояние погоды (Sunny, Cloudy, Rainy): ");
    scanf("%f %f %s", &currentWeather.temperature, &currentWeather.humidity, currentWeather.condition);

    printf("\nTemperature: %.1f°C\n", currentWeather.temperature);
    printf("Humidity: %.1f%%\n", currentWeather.humidity);
    printf("Condition: %s\n", currentWeather.condition);

    return 0;
}