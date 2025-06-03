#include <stdio.h>

/*
    ========================================
    POINTERS IN C - DETAILED EXPLANATION
    ========================================

    1. WHAT IS A POINTER?
    ---------------------
    - A pointer is a variable that stores the memory address of another variable.
    - Instead of holding data directly, it "points" to the location in memory where data is stored.
    - This allows indirect access to variables, dynamic memory management, and efficient data handling.

    2. WHY USE POINTERS?
    ---------------------
    - To manipulate variables directly via their memory address.
    - To work with dynamic memory allocation.
    - To efficiently pass large data (like arrays or structs) to functions without copying.
    - To implement data structures like linked lists, trees, etc.
    - For function pointers and callbacks.

    3. POINTER DECLARATION
    -----------------------
    Syntax:
        type *pointerName;
    
    Example:
        int *p;          // p is a pointer to an int
        float *fptr;     // fptr points to a float
        char *cptr;      // cptr points to a char

    Note:
    - The asterisk (*) indicates that the variable is a pointer.
    - The type before * indicates the type of data the pointer points to.

    4. INITIALIZING POINTERS
    -------------------------
    int x = 10;
    int *p = &x;   // '&' is the "address-of" operator, p now holds the address of x

    5. DEREFERENCING POINTERS
    --------------------------
    - Dereferencing means accessing the value stored at the address the pointer points to.
    - Use the * operator again:
        printf("%d\n", *p);  // prints the value of x, which is 10
    - Changing value via pointer:
        *p = 20;  // changes x to 20

    6. NULL POINTER
    ---------------
    - A pointer that points to nothing, represented by NULL.
    - Always initialize pointers to NULL if you don't assign an address immediately.
    - Dereferencing NULL leads to undefined behavior (usually crashes).

    7. POINTER ARITHMETIC
    ----------------------
    - You can add or subtract integers to/from pointers.
    - Pointer arithmetic moves the pointer by multiples of the size of the type it points to.
    - Example:
        int arr[5] = {10,20,30,40,50};
        int *ptr = arr;   // points to arr[0]
        ptr++;            // now points to arr[1]
        printf("%d\n", *ptr); // prints 20

    8. POINTERS AND ARRAYS
    ----------------------
    - Array name acts like a constant pointer to its first element.
    - Example:
        int arr[3] = {1, 2, 3};
        int *p = arr;     // points to arr[0]
        printf("%d\n", *(p + 1)); // prints arr[1] = 2

    9. POINTER TO POINTER (Double Pointer)
    --------------------------------------
    - A pointer that stores the address of another pointer.
    - Declaration: int **pp;
    - Usage:
        int x = 5;
        int *p = &x;
        int **pp = &p;

        printf("%d\n", **pp);  // prints 5

    10. POINTERS AND FUNCTIONS
    ---------------------------
    - Pass pointer to function to modify variables outside function.
    - Pass arrays using pointers.
    - Function pointers allow dynamic function calls.

    11. DANGERS WITH POINTERS
    -------------------------
    - Dangling pointers (pointing to freed or invalid memory)
    - Null pointer dereferencing
    - Pointer arithmetic out of bounds
    - Always be careful and initialize pointers properly.

    ======================
    COMPLETE POINTER EXAMPLE
    ======================
*/

int main() {
    int x = 42;

    // Declare an integer pointer and assign address of x
    int *ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void*)&x);

    printf("Pointer ptr stores address: %p\n", (void*)ptr);
    printf("Value pointed by ptr (*ptr): %d\n", *ptr);

    // Change value of x using pointer
    *ptr = 100;
    printf("New value of x (after *ptr = 100): %d\n", x);

    // Null pointer example
    int *nullPtr = NULL;
    // printf("%d", *nullPtr); // DON'T do this! It will crash the program

    // Pointer arithmetic with array
    int arr[3] = {10, 20, 30};
    int *p = arr;  // points to arr[0]

    printf("\nArray elements using pointer arithmetic:\n");
    for (int i = 0; i < 3; i++) {
        printf("*(p + %d) = %d\n", i, *(p + i));
    }

    // Pointer to pointer example
    int **pptr = &ptr;
    printf("\nValue of x via double pointer: %d\n", **pptr);

    // Demonstrating changing pointer target
    int y = 55;
    ptr = &y;
    printf("Pointer now points to y: %d\n", *ptr);

    return 0;
}

/*
    =============================
    SUMMARY:
    =============================
    - Pointer stores the memory address of a variable.
    - Use & to get address, * to dereference and access/change value.
    - Always initialize pointers (NULL if no valid address yet).
    - Pointer arithmetic moves pointer by sizeof(type).
    - Arrays and pointers are closely related.
    - Pointer to pointer stores address of another pointer.
    - Use pointers carefully to avoid crashes and bugs.
*/
