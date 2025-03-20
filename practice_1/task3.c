#include <stdio.h>

int main() {
    char letter;

    printf("Введите символ: ");
    scanf("%c", &letter);

    if (letter >= 'A' && letter < 'Z') {
        printf("Подходит\n");
    } else {
        printf("Не подходит.\n");
    }

    return 0;
}
