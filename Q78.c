#include <stdio.h>

int main() {
    int n;
    printf("Enter size of the square matrix (n x n): ");
    scanf("%d", &n);

    int A[100][100];
    int sum = 0;

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Sum of main diagonal elements
    for (int i = 0; i < n; i++) {
        sum += A[i][i];  // main diagonal condition
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
