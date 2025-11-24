#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100];
    int rowSum[100];

    // Taking input
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating sum of each row
    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        rowSum[i] = sum;   // store sum of row i
    }

    // Printing row-wise sum
    printf("Row-wise Sum:\n");
    for(int i = 0; i < rows; i++) {
        printf("Sum of row %d = %d\n", i, rowSum[i]);
    }

    return 0;
}
