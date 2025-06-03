#include <stdio.h>

int main() {
    float a = 0.0f;
    float b = 0.0f;
    char operand = '\0';

    /*
        📘 SIMPLE CALCULATOR USING SWITCH-CASE IN C
        -------------------------------------------
        ➤ Covers:
            - Basic arithmetic operations (+, -, *, /, %)
            - Input handling using scanf
            - Buffer handling for character input
            - Type casting (float to int) for integer-only operations like modulus
            - Use of switch-case instead of if-else
    */

    // 🔸 Ask for two floating point numbers
    printf("Enter the numbers you want to do operations on: ");
    scanf("%f%f", &a, &b); // scanf reads input and stores in float variables

    /*
        ⚠️ scanf("%c", &operand) WITHOUT SPACE will likely consume leftover newline from previous input.
        So always add a space before %c to flush the newline from input buffer if there have been scanf used before.
    */
    printf("Enter the operand (+, -, *, /, %%): ");
    scanf(" %c", &operand); // leading space is important before %c

    /*
        🔁 SWITCH-CASE:
        ➤ Allows cleaner branching instead of if-else ladders.
        ➤ Works only on integral types (char, int, etc.)
        ➤ Each `case` must be a constant value.
    */
    switch (operand) {
        case '+':
            // ✅ Addition (float + float)
            printf("Addition of %.2f and %.2f is %.2f\n", a, b, a + b);
            break;

        case '-':
            // ✅ Subtraction (float - float)
            printf("Subtraction of %.2f and %.2f is %.2f\n", a, b, a - b);
            break;

        case '*':
            // ✅ Multiplication (float * float)
            printf("Multiplication of %.2f and %.2f is %.2f\n", a, b, a * b);
            break;

        case '/':
            // ✅ Division (float / float), with division-by-zero check
            if (b != 0)
                printf("Division of %.2f and %.2f is %.2f\n", a, b, a / b);
            else
                printf("❌ Error: Division by zero\n");
            break;

        case '%':
            /*
                ⚠️ Modulus operator (%) only works on integers.
                So we cast the float inputs to integers before applying %.
                ⚠️ Note: This will TRUNCATE decimals (not round).
            */
            if ((int)b != 0)
                printf("Modulo of %d and %d is %d\n", (int)a, (int)b, (int)a % (int)b);
            else
                printf("❌ Error: Modulo by zero\n");
            break;

        default:
            // ❌ If operator is not recognized
            printf("❗ Invalid operand entered. Use only +, -, *, /, %%\n");
    }

    /*
        ✅ TYPE CASTING NOTES:
        ----------------------
        ➤ (int)a: Converts float 'a' to int (e.g., 5.87 → 5)
        ➤ Why needed?
            - Modulo operation does not work with float
            - Forces explicit conversion to avoid implicit/dangerous behavior
        ➤ (float)int_var: Can be used if you want to promote int to float (not needed here)
    */

    return 0;
}
