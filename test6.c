#include <stdio.h>
struct car {
    char Model[50];
    int year;
    float price;
};

int main() {
    int n,i;
    
    printf("Enter the number of Car: ");
    scanf("%d", &n);

    struct car a[n];

    for ( i = 0; i < n; i++) {
        printf("Enter details for car %d:\n", i + 1);
        printf("Model Name: ");
        scanf("%s", &a[i].Model);
        printf("Year: ");
        scanf("%d", &a[i].year);
        printf("Price: ");
        scanf("%f", &a[i].price);
    }

    printf("\nCar Details:\n");
    for ( i = 0; i < n; i++) {
        printf("Details of car %d:\n", i + 1);
        printf("Model Name: %s\n", a[i].Model);
        printf("year: %d\n", a[i].year);
        printf("Price: %.2f\n", a[i].price);
    }

    return 0;
}
