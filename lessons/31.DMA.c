#include <stdio.h>
#include <stdlib.h> // For malloc, calloc, realloc, free

/*
    ================================
    DYNAMIC MEMORY ALLOCATION IN C
    ================================

    Unlike static memory (like arrays declared with fixed size),
    dynamic memory allows you to allocate memory at runtime based
    on the program's needs.

    C provides 4 main functions for dynamic memory management:
    1. malloc()
    2. calloc()
    3. realloc()
    4. free()

    --------------------------------------------------------------
    1. malloc (Memory Allocation)
    --------------------------------------------------------------
    - Syntax:
        void* malloc(size_t size);
    - Allocates 'size' bytes of uninitialized memory.
    - Returns a pointer to the first byte of allocated memory.
    - If allocation fails, returns NULL.
    - Memory is NOT initialized (contains garbage values).
    - Typically cast the returned void* pointer to the appropriate type.

    Example: Allocate memory for 5 integers
        int* ptr = (int*) malloc(5 * sizeof(int));

    --------------------------------------------------------------
    2. calloc (Contiguous Allocation)
    --------------------------------------------------------------
    - Syntax:
        void* calloc(size_t num, size_t size);
    - Allocates memory for 'num' elements each of 'size' bytes.
    - Memory is initialized to zero.
    - Returns pointer to allocated memory or NULL if failure.

    Example: Allocate memory for 5 integers and zero-initialize
        int* ptr = (int*) calloc(5, sizeof(int));

    --------------------------------------------------------------
    3. realloc (Re-allocate)
    --------------------------------------------------------------
    - Syntax:
        void* realloc(void* ptr, size_t new_size);
    - Changes the size of previously allocated memory block pointed by ptr to new_size bytes.
    - Contents up to min(old_size, new_size) are preserved.
    - If new_size > old_size, new memory is uninitialized.
    - May move memory to a new location if needed, in which case pointer changes.
    - Returns pointer to new memory block, or NULL if fails (original block untouched).

    --------------------------------------------------------------
    4. free
    --------------------------------------------------------------
    - Syntax:
        void free(void* ptr);
    - Frees/deallocates the memory previously allocated by malloc, calloc, or realloc.
    - Helps prevent memory leaks.
    - After freeing, the pointer becomes invalid (dangling pointer).
    - It’s good practice to set freed pointer to NULL.

*/

/*
    PROGRAM DEMONSTRATION:
*/
int main() {
    int *arr = NULL;
    int n = 5, i;

    // malloc example
    arr = (int*) malloc(n * sizeof(int));  // allocate memory for 5 ints

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // exit program if malloc fails
    }

    printf("Using malloc - uninitialized values:\n");
    for (i = 0; i < n; i++) {
        // Values are garbage since malloc does not initialize
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Initialize values manually since malloc doesn't zero initialize
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("After initialization:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // calloc example
    int *arr2 = (int*) calloc(n, sizeof(int));  // allocate and zero initialize

    if (arr2 == NULL) {
        printf("Memory allocation failed!\n");
        free(arr);
        return 1;
    }

    printf("Using calloc - zero initialized values:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);  // all zero initially
    }
    printf("\n\n");

    // realloc example - resize arr to hold 8 integers
    int new_size = 8;
    int *temp = (int*) realloc(arr, new_size * sizeof(int));

    if (temp == NULL) {
        printf("Reallocation failed!\n");
        free(arr);
        free(arr2);
        return 1;
    }
    arr = temp; // assign resized pointer back

    // Initialize new elements (from index 5 to 7)
    for (i = n; i < new_size; i++) {
        arr[i] = i + 1;
    }

    printf("After realloc to size %d:\n", new_size);
    for (i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // free allocated memory to avoid memory leaks
    free(arr);
    free(arr2);
    arr = NULL;  // prevent dangling pointer
    arr2 = NULL;

    return 0;
}

/*
    SUMMARY:

    malloc():
    - Allocates memory block of specified size.
    - Memory contents are garbage (uninitialized).
    - Returns NULL if allocation fails.

    calloc():
    - Allocates memory for array of elements.
    - Initializes all bits to zero.
    - Safer when you want initialized memory.

    realloc():
    - Changes size of previously allocated memory.
    - May move block to new location.
    - Contents preserved up to min(old_size, new_size).
    - Returns new pointer or NULL if fails.

    free():
    - Frees allocated memory.
    - Always call free to avoid memory leaks.
    - Do not use pointer after freeing it.

    KEY POINTS:
    - Always check if malloc/calloc/realloc returned NULL before using memory.
    - Cast void* to appropriate pointer type.
    - Manage memory carefully to prevent leaks and dangling pointers.
*/
