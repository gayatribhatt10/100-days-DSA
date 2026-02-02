#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos, i;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 0;
    }

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (1-based): ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position.\n");
        free(arr);
        return 0;
    }
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Updated array:\n");
    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}