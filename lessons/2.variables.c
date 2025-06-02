#include <stdio.h>     // Standard Input/Output header for functions like printf()
#include <stdbool.h>   // Header file to use boolean data type in C (true/false)

int main()
{
    // A variable is a reusable container for storing data.
    // It behaves as if it holds the value directly.
    // Syntax: datatype variable_name = value;

    // Integer variable
    int age = 21;
    printf("You are %d years old\n", age);
    // %d is the format specifier for integers.

    // Floating-point (decimal) variable
    float gpa = 8.9;
    printf("Your GPA is %f\n", gpa);
    // %f is the format specifier for float.
    // Output: Your GPA is 8.900000
    // By default, float is printed with 6 digits after the decimal point.
    // To control precision, we use: %.nf (e.g., %.2f for 2 decimal places)

    printf("Your GPA is %.3f\n", gpa);
    // Output: Your GPA is 8.900 (rounded to 3 decimal places)

    // Double-precision floating-point variable
    double d = 7.666666666;
    // double can store up to ~15–16 decimal digits, compared to 6–7 for float.
    printf("Your GPA is %.3lf\n", d);
    // %lf is the format specifier for double (long float).
    // Using %.3lf limits the output to 3 decimal places.

    // Character variable
    char k = 'K'; // Single characters are enclosed in single quotes.
    printf("Your name starts with %c\n", k);
    // %c is the format specifier for characters.

    // String variable
    // In C, there is no native string type. Strings are arrays of characters.
    char name[] = "Kedar Damale";
    // If array size is not specified, C auto-calculates it based on the string length + 1 (for '\0' terminator).
    printf("Your Name is %s\n", name);
    // %s is the format specifier for strings (character arrays).

    // Boolean variable
    // C does not have a built-in boolean type in older versions.
    // To use `bool`, include <stdbool.h>
    bool isPresent = true;
    // `true` is equivalent to 1, and `false` is equivalent to 0 in C.
    // You can also directly assign 1 or 0.
    printf("%d\n", isPresent);  // Output: 1

    // Sizes of standard data types (may vary depending on compiler and architecture):
    // int    → typically 4 bytes (stores whole numbers)
    // float  → 4 bytes (single-precision decimal)
    // double → 8 bytes (double-precision decimal)
    // char   → 1 byte (stores single characters)
    // char[] → size depends on number of characters + null terminator '\0'
    // bool   → 1 byte (requires <stdbool.h>)

    return 0;  // return 0 indicates successful program termination.
}
