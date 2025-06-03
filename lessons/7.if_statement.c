// A Segmentation Fault (often abbreviated as segfault) is a runtime error that occurs when a program tries to access a memory location 
// that it is not allowed to access. This usually leads to the abrupt termination of the program by the operating system to prevent further damage or undefined behavior.


// Common Causes of Segmentation Faults (with examples)

// 1. Dereferencing a NULL pointer
// int *ptr = NULL;
// *ptr = 42;  // Segmentation fault

// 2. Accessing memory out of bounds
// int arr[5];
// arr[10] = 3;  // Out of bounds → segfault (undefined behavior)

// 3. Using uninitialized pointers
// int *ptr;   // Uninitialized pointer → undefined memory
// *ptr = 10;  // May cause segmentation fault

// 4. Use-after-free (dangling pointer)
// int *ptr = malloc(sizeof(int));
// free(ptr);
// *ptr = 5;  // Accessing memory after it's freed

// 5. Stack overflow
// Excessive recursion can cause stack memory to be exhausted:
// void recurse() {
//     recurse();  // Infinite recursion
// }









//     CONTROL STATEMENTS IN C
//     └──> Used to control the flow of execution of program statements

//     ┌──────────────────────────────┐
//     │      CONTROL STATEMENTS      │
//     └────────────┬────────────────┘
//                  │
//      ┌───────────┴────────────┐
//      │                        │
// ┌────▼─────┐           ┌──────▼───────┐
// │SELECTION │           │  ITERATION   │
// │(Decision)│           │   (Loops)    │
// └────┬─────┘           └──────┬───────┘
//      │                        │
// ┌────▼────┐         ┌─────────▼──────────┐
// │ if      │         │ while              │
// │ if-else │         │ do-while           │
// │ nested  │         │ for                │
// │ if-else │         └────────────────────┘
// │ switch  │
// └─────────┘
//      │
//      ▼
// Handles conditions and branching
// based on boolean expressions

//      ┌──────────────────────────────────┐
//      │          BRANCHING               │
//      └────────────┬─────────────────────┘
//                   │
//         ┌─────────▼────────────┐
//         │ break                │ → exits from loop/switch
//         │ continue             │ → skips current iteration
//         │ return;              │ → exits from function
//         └──────────────────────┘


#include <stdio.h>

int main() {

    // ────────────────────────────────────────────────
    // SIMPLE IF STATEMENT
    // ────────────────────────────────────────────────
    // Syntax:
    // if (condition) {
    //     // executes only if condition is true
    // }

    int age = 21;

    if (age > 18) {
        printf("User is adult\n");  // ✅ Will execute because 21 > 18
    }

    if (age > 28) {
        printf("User is adult\n");  // ❌ Will NOT execute because 21 < 28
    }

    // Output so far:
    // User is adult

    // ────────────────────────────────────────────────
    // IF-ELSE STATEMENT
    // ────────────────────────────────────────────────
    // Syntax:
    // if (condition) {
    //     // if condition true
    // } else {
    //     // if condition false
    // }

    if (age >= 18) {
        printf("User is mature\n");  // ✅ Executes because 21 >= 18
    } else {
        printf("User is not mature\n");  // ❌ Skipped
    }

    // Output so far:
    // User is adult
    // User is mature

    // ────────────────────────────────────────────────
    // IF - ELSE IF - ELSE LADDER
    // ────────────────────────────────────────────────
    // Syntax:
    // if (condition1) {
    //     // true → executes this block only
    // }
    // else if (condition2) {
    //     // only if condition1 is false
    // }
    // else {
    //     // only if all conditions are false
    // }
    //
    // ⚠️ Only the FIRST matched condition is executed which means if 1st and 3rd loop match the expression only the first one will be executed

    if (age < 18) {
        printf("You are underage\n");     // ❌ false
    }
    else if (age == 21) {
        printf("You are exactly 21\n");   // ✅ true
    }
    else {
        printf("You are older than 21\n");  // ❌ skipped
    }

    // Final output:
    // User is adult
    // User is mature
    // You are exactly 21

    // ────────────────────────────────────────────────
    // RELATIONAL OPERATORS USED IN CONDITIONS:
    // ────────────────────────────────────────────────
    // ==   → Equal to
    // >    → Greater than
    // <    → Less than
    // >=   → Greater than or equal to
    // <=   → Less than or equal to
    // !=   → Not equal to
    // !    → Logical NOT

    return 0;
}
