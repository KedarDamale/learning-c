#include <stdio.h>

/*
    ==========================================================
    DETAILED EXPLANATION OF typedef IN C
    ==========================================================

    1. WHAT IS typedef?
    -------------------
    - 'typedef' is a keyword in C used to create a new name (alias) for an existing data type.
    - It does NOT create a new type; it simply defines an alternative name for an existing type.
    - This improves code readability and simplifies complex declarations.
    
    2. WHY USE typedef?
    -------------------
    - To simplify complex data type declarations (especially structs, unions, pointers, function pointers).
    - To increase code readability by giving meaningful names to types.
    - To make code more portable by abstracting platform-specific types.
    - To reduce typing effort.
    
    3. SYNTAX
    ----------
        typedef existing_type new_type_name;
        
    Example:
        typedef unsigned int uint;

    After this, 'uint' can be used instead of 'unsigned int'.

    4. HOW typedef WORKS
    -------------------
    - The compiler treats 'new_type_name' as exactly the same as 'existing_type'.
    - No new memory or separate type is created.
    - typedefs obey scope rules like variables.

    5. COMMON USE CASES
    -------------------

    A. Simple aliasing for basic types:
        typedef unsigned int uint;
        typedef float real;

    B. Struct aliasing:

        struct Point {
            int x;
            int y;
        };

        // Without typedef:
        struct Point p1;

        // With typedef:
        typedef struct Point Point;
        Point p2;

    C. More commonly, define typedef at once with struct declaration:

        typedef struct {
            int x;
            int y;
        } Point;

        // Now you can declare Point variables without 'struct' keyword:
        Point p3;

    D. Pointer typedefs:

        typedef int* IntPtr;

        IntPtr p;  // p is an int pointer

    E. Function pointer typedefs (simplifies syntax greatly):

        typedef int (*FuncPtr)(int, int);

        FuncPtr add = &someFunction;

    6. IMPORTANT NOTES
    -------------------
    - typedef does NOT create a new type, it just creates an alias.
      So, typedef-ed names are interchangeable with their original types.
    - typedef does not add any semantic meaning by itself but can improve readability.
    - typedef names follow normal identifier rules.
    - It is common to use ALL CAPS or CamelCase for typedef names by convention.
    - You can typedef arrays, pointers, function pointers, structs, unions, enums, etc.
    - typedef does not affect storage, size, or performance.

    7. EXAMPLES WITH EXPLANATIONS
    ------------------------------

    a) Basic alias:

        typedef unsigned long ulong;
        ulong x = 100000;

    b) Struct aliasing:

        typedef struct {
            int id;
            char name[50];
        } Employee;

        Employee emp1;

    c) Pointer alias:

        typedef char* String;

        String s = "Hello";

    d) Complex pointer alias:

        typedef int* IntPtr;

        IntPtr a, b; // Both a and b are pointers to int

    e) Function pointer:

        typedef int (*Comparator)(const void*, const void*);

        // Now Comparator can be used to declare function pointers that
        // match this signature, e.g. for qsort

    8. SUMMARY
    ----------
    • typedef creates a new name (alias) for existing types.
    • Simplifies code and increases readability.
    • Does not create new types, only aliases.
    • Extremely useful for complex types like structs, pointers, and function pointers.

*/


// Example program demonstrating typedef usage:

typedef unsigned int uint;  // alias for unsigned int

typedef struct {
    int x;
    int y;
} Point;  // typedef combined with struct declaration

typedef int* IntPtr;  // alias for pointer to int

typedef int (*FuncPtr)(int, int);  // alias for a pointer to a function taking two ints and returning int

// Sample function matching FuncPtr type
int add(int a, int b) {
    return a + b;
}

int main() {
    uint age = 25;  // using typedef alias for unsigned int
    printf("Age: %u\n", age);

    Point p1 = {10, 20};  // declare struct variable without 'struct' keyword
    printf("Point p1 coordinates: (%d, %d)\n", p1.x, p1.y);

    IntPtr ptr = &p1.x;  // pointer to int using typedef alias
    printf("Value pointed by ptr: %d\n", *ptr);

    FuncPtr func = add;  // function pointer using typedef
    int result = func(5, 7);
    printf("Result of function pointer call: %d\n", result);

    return 0;
}
