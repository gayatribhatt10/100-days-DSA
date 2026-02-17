#include <stdio.h>

int main() {
    int m, n;
    int sum = 0;

    // Read matrix dimensions
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    // Read matrix elements
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of primary diagonal
    for(int i = 0; i < m && i < n; i++) {
        sum += matrix[i][i];
    }

    // Print result
    printf("%d\n", sum);

    return 0;
}
