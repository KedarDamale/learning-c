#include <stdio.h>

/*
    ===============================
    ARRAYS IN C - COMPREHENSIVE NOTES
    ===============================

    1) What is an Array?
       - An array is a collection of elements of the SAME data type.
       - These elements are stored in contiguous memory locations.
       - Arrays allow us to store multiple values using a single variable name.
       - Each element is accessed using an index (starting at 0).

    2) Syntax for declaring an array:
       data_type array_name[array_size];

       Example:
       int numbers[5];  // declares an array of 5 integers

    3) Accessing array elements:
       - Array elements are accessed using zero-based indexing.
       - The first element is numbers[0], second is numbers[1], and so on.
       - Accessing an index outside [0..array_size-1] leads to undefined behavior.

    4) Initializing arrays:
       - At the time of declaration:
         int nums[5] = {10, 20, 30, 40, 50};
       - If fewer elements are provided, rest are initialized to 0:
         int nums[5] = {1, 2}; // nums[2], nums[3], nums[4] = 0
       - Can leave out size to let compiler infer:
         int nums[] = {5, 10, 15}; // size=3 inferred

    5) Arrays and memory:
       - Arrays occupy contiguous memory locations.
       - Size of array in bytes = number_of_elements * size_of_element
       - Array name acts like a pointer to the first element.

    6) Multidimensional arrays:
       - Arrays with more than one dimension.
       - Example: int matrix[3][4]; // 3 rows, 4 columns
       - Access elements via two indices: matrix[row][col]

    7) Limitations:
       - Fixed size once declared (static arrays).
       - No built-in bounds checking.
       - Cannot assign arrays directly; element-wise copy needed or use loops.

    ==================================================================
*/


int main() {

    // 1) Declare and initialize an integer array of size 5
    int numbers[5] = {10, 20, 30, 40, 50};

    // 2) Accessing elements:
    printf("First element: %d\n", numbers[0]);  // 10
    printf("Third element: %d\n", numbers[2]);  // 30

    // 3) Modify element:
    numbers[1] = 25;  // Change second element from 20 to 25
    printf("Modified second element: %d\n", numbers[1]);  // 25

    // 4) Array length calculation using sizeof:
    // sizeof(numbers) gives total bytes of array
    // sizeof(numbers[0]) gives size of one element
    int length = sizeof(numbers) / sizeof(numbers[0]);
    printf("Array length is: %d\n", length);

    // 5) Iterate over array using for loop:
    printf("All elements in the array:\n");
    for (int i = 0; i < length; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // 6) Partial initialization example:
    int partial[5] = {1, 2};  // remaining 3 elements initialized to 0
    printf("Partial initialization array:\n");
    for (int i = 0; i < 5; i++) {
        printf("partial[%d] = %d\n", i, partial[i]);
    }

    // 7) Multidimensional array (2D array) declaration:
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Accessing 2D array elements:
    printf("Element at row 1, column 2: %d\n", matrix[1][2]);  // 6

    // Iterating 2D array using nested loops:
    printf("All elements of matrix:\n");
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            printf("matrix[%d][%d] = %d\t", row, col, matrix[row][col]);
        }
        printf("\n");
    }

    // 8) Array name as pointer:
    // numbers acts as a pointer to numbers[0]
    printf("Address of first element: %p\n", (void*)numbers);
    printf("Value at first element using pointer dereference: %d\n", *numbers);

    // 9) Warning - Out of bounds access is undefined behavior:
    // printf("%d\n", numbers[10]); // DO NOT DO THIS - causes undefined results or crash

    /*
        SUMMARY:
        ----------
        - Arrays store multiple elements of the same type.
        - Use zero-based indexing to access elements.
        - Fixed size, declared at compile-time.
        - Multidimensional arrays are arrays of arrays.
        - Array names can be used as pointers to first element.
        - No automatic bounds checking — be careful.
    */

    return 0;
}
