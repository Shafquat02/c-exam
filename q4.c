#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;

    printf("Even elements in the array are: ");
    for (int i = 0; i < n; i++) {
        if (*(ptr + i) % 2 == 0) {
            printf("%d ", *(ptr + i));
        }
    }
    printf("\n");

    return 0;
}