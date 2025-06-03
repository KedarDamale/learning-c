#include <stdio.h>

int main() {

    /*
        📘 FOR LOOP IN C
        ----------------
        ➤ A `for` loop is an **entry-controlled loop** (like while loop).
        ➤ It is best used when the **number of iterations is known** in advance.

        🧠 Syntax:
            for(initialization; condition; update) {
                // loop body
            }

        ➤ The `initialization` is executed only once at the beginning.
        ➤ The `condition` is evaluated before every iteration.
        ➤ The `update` statement is executed **after each iteration**.
    */


    printf("🔁 Printing numbers from 1 to 5 using a for loop:\n");
    for(int i = 1; i <= 5; i++) {
        printf("i = %d\n", i);
    }

    /*
        🔄 Execution Flow:
        ------------------
        1. Initialization: int i = 1
        2. Condition: i <= 5 → true
        3. Execute body: print i
        4. Update: i++
        5. Repeat steps 2–4 until condition becomes false
    */


    /*
        🧮 Example: Sum of first 'n' natural numbers using a for loop
    */

    int n, sum = 0;

    printf("\nEnter a number to calculate sum up to n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("✅ Sum of first %d natural numbers is: %d\n", n, sum);


    /*
        🔁 REVERSE COUNTING
    */

    printf("\n🔁 Countdown from 10 to 1:\n");
    for(int i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");


    /*
        💡 Using multiple variables in for loop
    */

    printf("\n🎯 Using multiple loop variables:\n");
    for(int i = 1, j = 10; i <= 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }

    /*
        ✋ INFINITE FOR LOOP
        -------------------
        ➤ `for(;;)` creates an infinite loop (no init, condition, or update)
        ➤ You can manually `break` inside when needed
        ➤ Be careful to avoid unintentional infinite loops

        Example:
            for(;;) {
                // runs forever
                if(some_condition)
                    break;
            }
    */


    /*
        🧠 COMMON PITFALLS:
        ------------------
        1. Modifying loop variable inside the loop body (unexpected behavior)
        2. Using wrong relational operators (e.g., < instead of <=)
        3. Forgetting semicolons in for(;;)
        4. Creating dead or infinite loops unintentionally
    */


    /*
        🧪 NESTED FOR LOOPS:
        --------------------
        ➤ A `for` loop can be placed inside another `for` loop.

        📌 Example: printing a pattern
    */

    printf("\n🧱 Pattern using nested for loops:\n");
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 4; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /*
        Output:
        * * * *
        * * * *
        * * * *
    */


    /*
        🧠 WHEN TO USE `for` LOOP:
        --------------------------
        ✓ When number of iterations is **predefined or known**
        ✓ When all loop control actions (init, check, update) can be cleanly expressed
        ✓ Useful in arrays, matrix traversal, counting tasks, etc.
    */


    return 0;
}
