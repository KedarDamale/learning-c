#include <stdio.h>

int main() {

    /*
        📘 NESTED LOOPS IN C
        ---------------------
        ➤ A **nested loop** is when one loop is placed inside another loop.
        ➤ This is often used for multidimensional tasks like matrices, grids, and pattern generation.

        ✅ Common nesting structure:
            for(initialization1; condition1; update1) {
                for(initialization2; condition2; update2) {
                    // Inner loop body
                }
                // Outer loop body (optional)
            }
        
        ➤ The inner loop runs completely **every time** the outer loop runs once.
    */


    /*
        🔁 Example 1: Basic Nested for loop to print row-column coordinates
    */
    printf("🔢 Coordinates (i, j):\n");
    for (int i = 1; i <= 3; i++) {             // Outer loop (rows)
        for (int j = 1; j <= 4; j++) {         // Inner loop (columns)
            printf("(%d, %d) ", i, j);
        }
        printf("\n");  // newline after each row
    }

    /*
        Output:
        (1, 1) (1, 2) (1, 3) (1, 4)
        (2, 1) (2, 2) (2, 3) (2, 4)
        (3, 1) (3, 2) (3, 3) (3, 4)
    */


    /*
        🔳 Example 2: Printing a rectangular pattern using nested for loop
    */
    printf("\n🧱 Rectangle pattern:\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /*
        Output:
        * * * * *
        * * * * *
        * * * * *
    */


    /*
        🔺 Example 3: Right-angled triangle (left-aligned)
    */
    printf("\n🔺 Left-aligned triangle:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /*
        Output:
        *
        * *
        * * *
        * * * *
        * * * * *
    */


    /*
        🔻 Example 4: Inverted triangle
    */
    printf("\n🔻 Inverted triangle:\n");
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /*
        Output:
        * * * * *
        * * * *
        * * *
        * *
        *
    */


    /*
        💠 Example 5: Pyramid pattern (center-aligned triangle)
    */
    printf("\n🔺 Centered pyramid pattern:\n");
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("* ");
        }
        printf("\n");
    }

    /*
        Output:
            * 
          * * * 
        * * * * * 
      * * * * * * * 
    * * * * * * * * * 
    */


    /*
        🧠 NESTED LOOP USE CASES
        ------------------------
        ✓ 2D array or matrix traversal
        ✓ Pattern printing problems
        ✓ Tabular data operations
        ✓ Game boards (chess, sudoku)
        ✓ Image or pixel processing
    */


    /*
        ⚠️ COMMON MISTAKES IN NESTED LOOPS
        ----------------------------------
        ❌ Infinite loop: forgetting to increment inner loop
        ❌ Wrong loop bounds: printing wrong shape or size
        ❌ Inner loop doesn't reset properly if dependent on outer
        ❌ Too much work in inner loop — consider efficiency
    */


    /*
        🧠 LOOP DRY RUN TIP:
        -------------------
        ➤ Always simulate 2–3 iterations on paper to understand flow:
            → Outer runs once → inner runs fully
            → Repeat until outer finishes
    */

    return 0;
}
