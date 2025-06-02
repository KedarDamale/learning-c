// Arithmetic operators allow you to perform basic mathematical operations.

#include <stdio.h>

int main()
{
    int a = 18;
    int b = 5;
    float c = 2.56;

    // Basic arithmetic operations with integers
    printf("%d\n", a + b);  // Addition: 18 + 5 = 23
    printf("%d\n", a - b);  // Subtraction: 18 - 5 = 13
    printf("%d\n", a * b);  // Multiplication: 18 * 5 = 90
    printf("%d\n", a / b);  // Integer division: 18 / 5 = 3 (decimal part truncated)

    // Division involving float
    printf("%f\n", a / c);  // Output: 18 / 2.56 = 7.03125
                            // Since c is a float, result is a float. Use %f to print.

    // Modulus (remainder of integer division)
    printf("%d\n", a % b);  // Output: 18 % 5 = 3

    // ---------------------
    // Increment and Decrement
    // ---------------------

    // Pre-increment: increment first, then use the value
    printf("%d\n", ++a);    // a becomes 19, then prints 19

    // Post-increment: use the value, then increment
    printf("%d\n", a++);    // prints 19, then a becomes 20

    // Post-decrement: use the value, then decrement
    printf("%d\n", a--);    // prints 20, then a becomes 19

    // Pre-decrement: decrement first, then use the value
    printf("%d\n", --a);    // a becomes 18, then prints 18

    // ---------------------
    // Augmented Assignment Operators
    // ---------------------

    // Instead of writing: x = x + 2;
    // You can write:      x += 2;

    // These are called augmented (or compound) assignment operators.
    // Available ones include: +=, -=, *=, /=, %=

    // Example:
    int x = 10;
    x += 5;     // Equivalent to: x = x + 5;
    printf("%d\n", x);  // Output: 15

    x *= 2;     // x = x * 2 → 30
    printf("%d\n", x);  // Output: 30

    x -= 10;    // x = x - 10 → 20
    printf("%d\n", x);  // Output: 20

    return 0;
}
