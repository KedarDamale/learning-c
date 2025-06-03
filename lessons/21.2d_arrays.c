#include <stdio.h>

/*
    ===============================
    2D ARRAYS IN C: COMPREHENSIVE NOTES
    ===============================

    - A 2D array is basically an "array of arrays".
    - It can be visualized as a matrix or table with rows and columns.
    - Syntax to declare: data_type array_name[rows][columns];
    - Elements accessed via two indices: array[row_index][column_index]
    - Indexing starts at 0 for both rows and columns.
    - Useful to represent grids, matrices, tables, etc.

    MEMORY LAYOUT:
    - In C, 2D arrays are stored in row-major order (row by row).
    - This means all elements of the first row are contiguous in memory,
      then the second row, and so forth.

    INITIALIZATION:
    - Can initialize at declaration, e.g. int mat[2][3] = {{1,2,3},{4,5,6}};
    - If you initialize fewer elements, rest are zero-initialized.

    USER INPUT:
    - To input values, use nested loops:
        Outer loop for rows,
        Inner loop for columns.
*/

int main() {
    int rows, cols;

    // Ask user for dimensions of 2D array
    printf("Enter number of rows (max 10): ");
    scanf("%d", &rows);
    printf("Enter number of columns (max 10): ");
    scanf("%d", &cols);

    // Validate sizes
    if(rows <= 0 || rows > 10 || cols <= 0 || cols > 10){
        printf("Invalid input! Rows and columns must be between 1 and 10.\n");
        return 1;
    }

    int matrix[10][10];  // Declare max size 10x10 matrix

    // Input elements using nested loops
    printf("Enter elements of the %dx%d matrix:\n", rows, cols);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display matrix elements
    printf("\nYou entered:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n"); // Newline after each row
    }

    /*
        KEY POINTS:
        -----------
        1) Declaration: int arr[rows][cols];
        2) Access: arr[i][j], where i = row index, j = column index.
        3) Nested loops required to traverse input/output.
        4) Dimensions can be constants or fixed max size in C (pre-C99).
        5) For dynamic sizes, consider pointers or dynamic memory allocation.
        6) Arrays decay to pointers but 2D arrays require double pointers or pointer to arrays.
        7) Be careful with index bounds (0 to rows-1 and 0 to cols-1).
    */

    return 0;
}
