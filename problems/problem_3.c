#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    char name[100];
    struct Date date;
    char description[255];
};

int main() {
    int n;
    struct Event events[50];

    printf("Введите количество событий: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Введите название, дату (по шаблону \"день месяц год\") и описание для события %d: ", i + 1);
        scanf("%s %d %d %d %s", events[i].name, &events[i].date.day, &events[i].date.month, &events[i].date.year, events[i].description);
    }

    for (int i = 0; i < n; i++) {
        printf("\nEvent: %s\n", events[i].name);
        printf("Date: %d/%d/%d\n", events[i].date.day, events[i].date.month, events[i].date.year);
        printf("Description: %s\n", events[i].description);
    }

    return 0;
}