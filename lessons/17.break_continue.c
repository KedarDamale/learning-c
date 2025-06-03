#include <stdio.h>

int main() {

    /*
        📘 BREAK & CONTINUE IN C LOOPS
        -------------------------------
        🔹 `break` → Immediately exits the nearest loop or switch block.
        🔹 `continue` → Skips the current iteration and jumps to the next iteration of the loop.

        ✅ These control statements are used to manage flow inside `for`, `while`, and `do-while` loops.
    */


    /*
        🔸 Example 1: break in a for loop
        ----------------------------------
        👉 Terminate loop early when condition is met.
    */
    printf("🔁 Using break to exit early:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("  Encountered 5, breaking loop.\n");
            break;  // Exits loop completely
        }
        printf("  i = %d\n", i);
    }

    /*
        Output:
        i = 1
        i = 2
        i = 3
        i = 4
        Encountered 5, breaking loop.
    */


    /*
        🔸 Example 2: continue in a for loop
        -------------------------------------
        👉 Skip specific iterations (e.g., skip even numbers).
    */
    printf("\n🔁 Using continue to skip even numbers:\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;  // Skip current iteration if i is even
        }
        printf("  i = %d\n", i);  // Prints only odd numbers
    }

    /*
        Output:
        i = 1
        i = 3
        i = 5
        i = 7
        i = 9
    */


    /*
        🔸 Example 3: break in nested loops
        ------------------------------------
        👉 Break exits only the **innermost** loop.
    */
    printf("\n🔁 break in nested loops (stops inner loop only):\n");
    for (int i = 1; i <= 3; i++) {
        printf("Outer Loop i = %d\n", i);
        for (int j = 1; j <= 5; j++) {
            if (j == 3) break;  // exits only inner loop
            printf("  Inner Loop j = %d\n", j);
        }
    }

    /*
        Output:
        Outer Loop i = 1
          Inner Loop j = 1
          Inner Loop j = 2
        Outer Loop i = 2
          Inner Loop j = 1
          Inner Loop j = 2
        Outer Loop i = 3
          Inner Loop j = 1
          Inner Loop j = 2
    */


    /*
        🔸 Example 4: continue in nested loops
        ---------------------------------------
        👉 Affects only the loop in which it's used.
    */
    printf("\n🔁 continue in nested loops (skips specific inner iterations):\n");
    for (int i = 1; i <= 2; i++) {
        printf("Outer Loop i = %d\n", i);
        for (int j = 1; j <= 5; j++) {
            if (j == 3) continue;  // skip j==3 only
            printf("  Inner Loop j = %d\n", j);
        }
    }

    /*
        Output:
        Outer Loop i = 1
          Inner Loop j = 1
          Inner Loop j = 2
          Inner Loop j = 4
          Inner Loop j = 5
        Outer Loop i = 2
          Inner Loop j = 1
          Inner Loop j = 2
          Inner Loop j = 4
          Inner Loop j = 5
    */


    /*
        🧠 NOTES:
        ---------
        ✓ break stops the loop immediately
        ✓ continue skips to the next iteration
        ✓ Both only affect the **nearest enclosing loop**
        ✓ Can be used in `for`, `while`, and `do-while`

        ⚠️ Avoid overusing break/continue—they can make logic harder to follow.
    */

    return 0;
}
