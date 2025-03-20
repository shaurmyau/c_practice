#include <stdio.h>

int main() {
    int speed;
    float size;

    printf("Введите скорость передачи данных в Кбит/с: ");
    scanf("%d", &speed);

    printf("Введите объём данных в Кбит: ");
    scanf("%f", &size);

    printf("%f", size / speed / 60.0);


    return 0;
}
