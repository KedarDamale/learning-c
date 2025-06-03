#include <stdio.h>

/*
    ===============================
    TERNARY OPERATOR IN C (?:)
    ===============================

    • The ternary operator is a concise way to write simple if-else statements.
    • Syntax:
        condition ? expression_if_true : expression_if_false;

    • It evaluates the condition:
        - If condition is true (non-zero), returns expression_if_true
        - Otherwise, returns expression_if_false

    • Useful for simple conditional assignments or expressions.
    • Can be nested but readability decreases if overused.

    Example:
        int max = (a > b) ? a : b;
        This means:
            if (a > b)
                max = a;
            else
                max = b;
*/

int main() {
    int a, b;

    printf("Enter two integers separated by space: ");
    scanf("%d %d", &a, &b);

    // Using ternary operator to find max
    int max = (a > b) ? a : b;

    // Using ternary operator inside printf
    printf("The larger number between %d and %d is %d\n", a, b, max);

    // Ternary operator for simple output decision
    printf("The number %d is %s\n", a, (a % 2 == 0) ? "even" : "odd");

    /*
        NOTES:
        - The ternary operator is an expression, so it returns a value.
        - It should not replace complex if-else blocks; for readability, use if-else in complex cases.
        - Both expressions must be of compatible types.
        - Avoid side-effects (like modifying variables) inside ternary expressions to keep code clean.
    */

    return 0;
}
