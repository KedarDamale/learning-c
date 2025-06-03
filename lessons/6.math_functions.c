#include <stdio.h>
#include <math.h>     // Required for all math functions like sqrt, pow, round, log, sin, etc.
#include <stdlib.h>   // Required for abs()

int main() {
    int x = 25;
    float y = 3.564f;
    int z = -45;

    // sqrt() returns the square root of a number (as double)
    // Use %f or %lf in printf (both work for float/double with printf, NOT with scanf)
    printf("sqrt(%d) = %f\n", x, sqrt(x));           // Output: 5.000000

    // pow(base, exponent): raises 'base' to the power of 'exponent'
    printf("pow(%d, 2) = %f\n", x, pow(x, 2));       // Output: 625.000000

    // round(): rounds to nearest integer
    printf("round(%f) = %f\n", y, round(y));         // Output: 4.000000

    // ceil(): always rounds up to the nearest integer
    printf("ceil(%f) = %f\n", y, ceil(y));           // Output: 4.000000

    // floor(): always rounds down to the nearest integer
    printf("floor(%f) = %f\n", y, floor(y));         // Output: 3.000000

    // abs(): returns the absolute value (only works on int type)
    printf("abs(%d) = %d\n", z, abs(z));             // Output: 45

    // log(): returns natural logarithm (base e) — takes only positive values
    // ⚠️ log() accepts double and returns double; passing an int works, but make sure the value is positive
    // ❌ printf("%d\n", log(x));  → Incorrect because log returns double, and %d expects int
    printf("log(%d) = %f\n", x, log(x));              // Natural log of 25 ≈ 3.218876

    // Common mistake: Thinking log() is log base 10. For base-10 log, use log10()
    printf("log10(%d) = %f\n", x, log10(x));          // Base-10 log of 25 ≈ 1.397940

    // Trigonometric functions also exist: sin(), cos(), tan() — all take radians
    double angle_deg = 30.0;
    double angle_rad = angle_deg * 3.14 / 180.0;      // Convert degrees to radians

    printf("sin(30°) = %f\n", sin(angle_rad));        // ≈ 0.5
    printf("cos(30°) = %f\n", cos(angle_rad));        // ≈ 0.866025

    return 0;
}
