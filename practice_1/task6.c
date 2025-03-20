#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int austro;
    int two = 0;
    int three = 0;
    int four = 0;
    printf("количество астронавтов: ");
    scanf("%d", &austro);

    if (austro % 2 == 1) {
        three += 1;
        austro -= 3;
    }
    four += austro / 4;
    austro %= 4;
    two += austro / 2;
    austro %= 2;
    if(austro != 0) {
        printf("Не подходит\n");
    }
    else {
        printf("Подходит\n");
        printf("Двухместные капсулы: %d", two);
        printf("\nТрёхместные капсулы: %d", three);
        printf("\nЧетырёхместные капсулы: %d", four);
    }

    return 0;
}
