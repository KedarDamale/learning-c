#include <stdio.h>

/*
    ===========================
    ARRAYS OF STRINGS IN C
    ===========================

    • In C, a string is an array of characters ending with a null character '\0'.
    • An array of strings is essentially a 2D char array or an array of char pointers.
    
    TWO COMMON WAYS TO STORE ARRAYS OF STRINGS:

    1) Using 2D char array:
       - Fixed size for number of strings and max length per string.
       - Example: char names[5][20];  // 5 strings max, each max length 19 + 1 for '\0'
       - Strings stored contiguously.

    2) Using array of pointers to char:
       - Each element points to a separate string literal or dynamically allocated string.
       - More flexible but requires careful memory management.

    This example demonstrates 2D char array for simplicity.
*/

int main() {
    // Declare an array of 5 strings, each can hold up to 19 characters + '\0'
    char names[5][20];

    // Input 5 names from user
    printf("Enter 5 names (max 19 characters each):\n");
    for (int i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        // Use %19s to avoid buffer overflow, reads up to 19 chars or until whitespace
        scanf("%19s", names[i]);
    }

    // Display entered names
    printf("\nEntered names are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }

    /*
        NOTES:
        - Using scanf("%s", ...) reads until first whitespace. So multi-word names aren't fully read.
        - For full lines including spaces, use fgets(), but then handle newline characters.
        - 2D char arrays have fixed size; if input exceeds, it may cause buffer overflow unless length limit is enforced.
        - To store variable-length strings dynamically, use pointers and dynamic memory allocation (malloc).
    */

    return 0;
}
