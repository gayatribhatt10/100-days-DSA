#include <stdio.h>
#include <stdlib.h>

int main() {
    int p, q;
    int i = 0, j = 0, k = 0;

    printf("Enter number of entries in server log 1: ");
    scanf("%d", &p);

    int *a = (int *)malloc(p * sizeof(int));

    printf("Enter sorted arrival times for server log 1:\n");
    for (i = 0; i < p; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of entries in server log 2: ");
    scanf("%d", &q);

    int *b = (int *)malloc(q * sizeof(int));

    printf("Enter sorted arrival times for server log 2:\n");
    for (i = 0; i < q; i++) {
        scanf("%d", &b[i]);
    }

    int *c = (int *)malloc((p + q) * sizeof(int));

    i = j = k = 0;

    printf("Merging the two logs...\n");

    while (i < p && j < q) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < p) {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < q) {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Final merged chronological log:\n");
    for (i = 0; i < p + q; i++) {
        printf("%d ", c[i]);
    }

    printf("\n");

    free(a);
    free(b);
    free(c);

    return 0;
}