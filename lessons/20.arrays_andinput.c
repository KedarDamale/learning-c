#include <stdio.h>

/*
    ==============================
    ARRAYS AND USER INPUT IN C
    ==============================

    - Arrays can store multiple values of the same type.
    - To populate an array with user input, we typically use a loop.
    - Input is read element-by-element.
    - Must ensure the user doesn’t enter more values than the array size.
    - Always validate inputs when necessary.
*/

int main() {
    int size = 0;

    // 1) Ask user for the size of the array
    printf("Enter the number of elements you want to store (max 100): ");
    scanf("%d", &size);

    // Validate size (basic check)
    if (size <= 0 || size > 100) {
        printf("Invalid size! Please enter a number between 1 and 100.\n");
        return 1;  // Exit program with error
    }

    int arr[100];  // Declare array with max size 100

    // 2) Take input from user to populate array elements
    printf("Enter %d integer elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);  // Store each input into arr[i]
    }

    // 3) Display the entered elements
    printf("You entered:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    /*
        NOTES:
        ------
        - Use loops to read multiple inputs into an array.
        - The index i corresponds to the position in the array.
        - Use scanf carefully: &arr[i] is the address of the ith element.
        - Always validate input size to prevent overflow.
        - The array size must be a constant or fixed in standard C arrays.
        - For dynamic input size, either use large fixed size arrays or dynamic memory allocation (malloc).
    */

    return 0;
}
