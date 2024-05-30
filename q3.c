#include <stdio.h>

void printOddElements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Odd elements in the array are: ");
    printOddElements(arr, n);
    printf("\n");

    return 0;
}