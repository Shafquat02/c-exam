#include <stdio.h>
#include <string.h>

#define MAX_LAPTOPS 10
#define MAX_COMPANY_NAME 20
#define MAX_PROCESSOR 20

typedef struct {
    char company_name[MAX_COMPANY_NAME];
    char processor[MAX_PROCESSOR];
    float price;
} Laptop;

void printLaptopDetails(Laptop laptops[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Laptop %d:\n", i + 1);
        printf("Company Name: %s\n", laptops[i].company_name);
        printf("Processor: %s\n", laptops[i].processor);
        printf("Price: %.2f\n\n", laptops[i].price);
    }
}

int main() {
    Laptop laptops[MAX_LAPTOPS];
    int n;

    printf("Enter the number of laptops: ");
    scanf("%d", &n);

    if (n > MAX_LAPTOPS) {
        printf("Error: Maximum number of laptops exceeded.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter details for laptop %d:\n", i + 1);
        printf("Company Name: ");
        scanf("%s", laptops[i].company_name);
        printf("Processor: ");
        scanf("%s", laptops[i].processor);
        printf("Price: ");
        scanf("%f", &laptops[i].price);
    }

    printf("\nLaptop Details:\n");
    printLaptopDetails(laptops, n);

    return 0;
}