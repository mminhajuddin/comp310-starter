#include <stdio.h>

//creating void functions because they are doing calculations and will be printing later
void addMatrices(int rows, int cols, int a[][cols], int b[][cols], int sum[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}
//multiple parameters to hold the constant 2
void multiplyMatrices(int rows1, int cols1, int rows2, int cols2, int a[][cols1], int b[][cols2], int product[][cols2]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2], product[2][2];

    addMatrices(2, 2, matrix1, matrix2, sum);

    multiplyMatrices(2, 2, 2, 2, matrix1, matrix2, product);
    
    //print matrix addition
    printf("Matrix Addition:\n");
    printMatrix(2, 2, sum);
    
    //print matric multiplication
    printf("Matrix Multiplication:\n");
    printMatrix(2, 2, product);

    return 0;
}