#include <stdio.h>

/*
    ===========================
    MATRIX ARITHMETIC IN C
    ===========================

    Matrices are 2D arrays of numbers.
    Basic operations include:
    1. Matrix Addition
    2. Matrix Subtraction
    3. Matrix Multiplication
    4. Matrix Transpose

    --- RULES AND REQUIREMENTS ---

    1) Addition and Subtraction:
       - Both matrices must have the same dimensions (rows and columns).
       - Add or subtract corresponding elements.

    2) Multiplication:
       - Number of columns in Matrix A must equal number of rows in Matrix B.
       - Resulting matrix has dimensions: rows of A x columns of B.
       - Each element in result is sum of products of corresponding row from A and column from B.

    3) Transpose:
       - Transpose of a matrix is flipping it over its diagonal.
       - Rows become columns and columns become rows.
       - Dimensions of transpose of matrix A (r x c) is (c x r).

    --- IMPLEMENTATION STEPS ---

    - Get matrix sizes and validate constraints.
    - Input elements.
    - Perform operations using nested loops.
    - Print results.

    --- NOTE ON VALIDATION ---

    Always check the dimensional compatibility before performing operations.
*/

int main() {
    int r1, c1, r2, c2;

    // Input dimensions of matrix A
    printf("Enter rows and columns for Matrix A (max 10x10): ");
    scanf("%d%d", &r1, &c1);
    if (r1 <= 0 || r1 > 10 || c1 <= 0 || c1 > 10) {
        printf("Invalid size for Matrix A.\n");
        return 1;
    }

    // Input dimensions of matrix B
    printf("Enter rows and columns for Matrix B (max 10x10): ");
    scanf("%d%d", &r2, &c2);
    if (r2 <= 0 || r2 > 10 || c2 <= 0 || c2 > 10) {
        printf("Invalid size for Matrix B.\n");
        return 1;
    }

    int A[10][10], B[10][10], result[10][10], transpose[10][10];

    // Input elements of Matrix A
    printf("Enter elements of Matrix A (%dx%d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements of Matrix B
    printf("Enter elements of Matrix B (%dx%d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // ------- MATRIX ADDITION -------
    if (r1 == r2 && c1 == c2) {
        printf("\nMatrix Addition Result (%dx%d):\n", r1, c1);
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                result[i][j] = A[i][j] + B[i][j];
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMatrix addition not possible: Dimensions do not match.\n");
    }

    // ------- MATRIX SUBTRACTION -------
    if (r1 == r2 && c1 == c2) {
        printf("\nMatrix Subtraction Result (A - B) (%dx%d):\n", r1, c1);
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                result[i][j] = A[i][j] - B[i][j];
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMatrix subtraction not possible: Dimensions do not match.\n");
    }

    // ------- MATRIX MULTIPLICATION -------
    if (c1 == r2) {
        // Result dimensions = r1 x c2
        printf("\nMatrix Multiplication Result (A x B) (%dx%d):\n", r1, c2);

        // Initialize result matrix with 0s
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                result[i][j] = 0;
            }
        }

        // Perform multiplication
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                for (int k = 0; k < c1; k++) {
                    // Multiply row of A with column of B and accumulate
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        // Print multiplication result
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMatrix multiplication not possible: Number of columns of A must equal number of rows of B.\n");
    }

    // ------- MATRIX TRANSPOSE -------
    // Transpose of Matrix A
    printf("\nTranspose of Matrix A (%dx%d) is (%dx%d):\n", r1, c1, c1, r1);
    for (int i = 0; i < c1; i++) {
        for (int j = 0; j < r1; j++) {
            transpose[i][j] = A[j][i];  // swap row and column indices
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
    SUMMARY:

    - Matrix Addition and Subtraction require equal dimensions.
    - Matrix Multiplication requires columns in A = rows in B.
    - Matrix Transpose flips matrix over its diagonal, swapping rows and columns.
    - Use triple nested loop for multiplication:
      Outer loops: iterate over rows of A and columns of B,
      Inner loop: compute dot product for element.
    - Use double nested loop for transpose swapping indices.
    - Always validate inputs and dimensions before operations.

    This program covers input, validation, and execution of basic matrix arithmetic including transpose.
*/
