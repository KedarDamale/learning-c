#include <stdio.h>  // Standard Input Output header for functions like printf()

int main()
{
    // Format specifiers are special tokens beginning with '%' followed by a character.
    // They tell the compiler how to interpret and display the data (int, float, char, etc.).

    // Let's declare some variables:
    int age = 20;
    float weight = 62.5;
    double pi = 3.14562345;
    char n = 'K';
    char name[] = "Kedar Damale";

    // To display variables, format specifiers are necessary.

    // Displaying integer with %d
    printf("%d\n", age);  // Output: 20

    // Displaying float with %f (displays 6 digits after decimal by default)
    printf("%f\n", weight);  // Output: 62.500000

    // Displaying double with %lf
    // Note: printf can use both %f and %lf for double,
    // but scanf requires %lf for reading doubles.
    printf("%lf\n", pi);  // Output: 3.145623

    // Displaying character with %c
    printf("%c\n", n);  // Output: K

    // Displaying string with %s
    printf("%s\n", name);  // Output: Kedar Damale

    // ---------------------
    // Format Specifier Modifiers
    // ---------------------

    // 1. Width: Minimum number of characters to print
    //    If data is shorter, it prepends spaces by default.
    //    Use '-' to left-align, and '0' to pad with zeros.

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%03d\n", num1);   // Output: 001 → pads with zeros (width = 3)
    printf("%-3d\n", num2);   // Output: "10 " → left-aligned (width = 3)
    printf("%3d\n", num3);    // Output: "100" → right-aligned by default (width = 3)

    // 2. Flag: '+' forces a sign for numeric output
    printf("%+d\n", num3);    // Output: +100

    // ---------------------
    // Precision Modifier
    // ---------------------

    float w1 = 62.5;
    float w2 = 19.99;

    printf("%f\n", w1);       // Output: 62.500000 → default precision = 6 digits
    printf("%.2f\n", w1);     // Output: 62.50 → precision set to 2 digits after decimal
    printf("%.1f\n", w2);     // Output: 20.0 → value is rounded

    // ---------------------
    // Combining Flags, Width, and Precision
    // ---------------------

    // Syntax: %[flags][width][.precision]specifier
    printf("%+30.14f\n", w1);
    // Output:            +62.50000000000000
    // Breakdown:
    // +     → show sign
    // 30    → total field width
    // .14   → 14 digits after decimal
    // f     → float

    return 0;
}
