#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int A[100][100];
    int diag[100];     // to store diagonal elements
    int isDistinct = 1;

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Extract diagonal elements
    for (int i = 0; i < n; i++) {
        diag[i] = A[i][i];
    }

    // Check distinctness (compare each pair)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }

    // Output result
    if (isDistinct)
        printf("All diagonal elements are DISTINCT.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}
