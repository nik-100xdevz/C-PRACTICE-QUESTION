#include <stdio.h>

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int result[][10], int rowFirst, int colFirst, int colSecond) {
    // Multiply the matrices and store the result
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colSecond; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colFirst; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

int main() {
    int rowFirst, colFirst, rowSecond, colSecond;

    // Input for first matrix dimensions
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);

    // Input for second matrix dimensions
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);

    // Check if multiplication is possible
    if (colFirst != rowSecond) {
        printf("Matrix multiplication not possible. Columns of first matrix must be equal to rows of second matrix.\n");
        return -1;
    }

    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];

    // Input for the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colFirst; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowSecond; i++) {
        for (int j = 0; j < colSecond; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Call the function to multiply matrices
    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, colFirst, colSecond);

    // Output the result of the matrix multiplication
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colSecond; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
