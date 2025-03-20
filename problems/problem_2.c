#include <stdio.h>


struct Item {
    char name[50];
    int quantity;
    float price;
};

int main() {
    int n; 
    struct Item items[100];

    printf("Введите количество товаров: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Введите название, количество и цену для товара %d: ", i + 1);
        scanf("%s %d %f", items[i].name, &items[i].quantity, &items[i].price);
    }

    for (int i = 0; i < n; i++) {
        printf("\nItem: %s\n", items[i].name);
        printf("Quantity: %d\n", items[i].quantity);
        printf("Price: %.2f\n", items[i].price);
    }

    return 0;
}