#include <stdio.h>

int main() {

    /*
        📘 WHILE LOOP IN C
        ------------------
        ➤ The `while` loop is an **entry-controlled loop**.
        ➤ It checks the condition **before** entering the loop body.
        ➤ It keeps executing the body as long as the condition is **true (non-zero)**.
    
        🧠 Syntax:
            while(condition) {
                // body of loop
            }

        🚨 If condition is initially false, the loop body will **not execute even once**.
    */

    int i = 1;

    printf("🔁 Printing numbers from 1 to 5 using a while loop:\n");

    while(i <= 5) {
        printf("i = %d\n", i);
        i++;  // increment is essential to eventually make condition false and exit loop
    }

    /*
        🔄 Loop flow:
            1. Check if i <= 5 (initially 1 <= 5 → true)
            2. Print i
            3. Increment i (i++)
            4. Repeat from step 1
            5. When i = 6 → 6 <= 5 → false → exit loop
    */


    /*
        🧪 EXAMPLE: Sum of first 'n' natural numbers using a while loop
    */
    int n, sum = 0, j = 1;

    printf("\nEnter a number to find sum of natural numbers till n: ");
    scanf("%d", &n);  // input: how many natural numbers to sum

    while(j <= n) {
        sum += j;  // sum = sum + j;
        j++;
    }

    printf("✅ Sum of first %d natural numbers is: %d\n", n, sum);


    /*
        🔁 INFINITE LOOP (USE WITH CAUTION)
        ----------------------------------
        while(1) {
            // runs forever unless broken using break or exit()
        }

        ➤ Useful in:
            - Embedded systems
            - Menu-driven programs
            - Event listeners
    */


    /*
        🧠 COMMON MISTAKES TO AVOID:
        ---------------------------
        1. Forgetting to update loop variable (can cause infinite loop)
        2. Incorrect condition logic (off-by-one errors)
        3. Confusing while vs do-while (while does not guarantee body execution)
    */


    /*
        🧠 COMPARISON TABLE:
        --------------------
        | Loop Type  | Condition Check | Body Execution Guarantee |
        |------------|------------------|---------------------------|
        | while      | Before           | ❌ (may not run at all)   |
        | do-while   | After            | ✅ (runs at least once)   |
        | for        | Before           | ❌                        |
    */


    return 0;
}
