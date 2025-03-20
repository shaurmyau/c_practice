#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double speed;
    double input_speed;
    printf("Введите рассчётную скорость: ");
    scanf("%lf", &speed);
    printf("Введите фактическую скорость: ");
    scanf("%lf", &input_speed);

    if (fabs(speed - input_speed) >= 0.1) {
        printf("Не подходит\n %f", fabs(speed - input_speed));
    } else {
        printf("Подходит.\n %f", fabs(speed - input_speed));
    }

    return 0;
}
