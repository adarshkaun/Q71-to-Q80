#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int A[100][100];

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    // Print upper half diagonals (including main diagonal)
    for (int startCol = 0; startCol < cols; startCol++) {
        int i = 0;
        int j = startCol;

        while (i < rows && j >= 0) {
            printf("%d ", A[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Print lower half diagonals
    for (int startRow = 1; startRow < rows; startRow++) {
        int i = startRow;
        int j = cols - 1;

        while (i < rows && j >= 0) {
            printf("%d ", A[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
