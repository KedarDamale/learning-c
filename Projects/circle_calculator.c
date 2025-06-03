#include <stdio.h>
#include <math.h> // Required for pow()

int main() {
    // Declare variables to store circle properties
    float radius = 0.0f;
    float diameter = 0.0f;
    float area = 0.0f;
    float circum = 0.0f;

    // Use float literal for better practice (adds 'f' to avoid implicit double to float conversion)
    // 'const' ensures pi is read-only; it protects the value from being accidentally modified
    const float pi = 3.14f;

    // Prompt user to enter the radius
    printf("Enter the radius of the circle: ");

    // ⚠️ DO NOT put '\n' in scanf format strings.
    // - scanf skips leading whitespace (space, tab, newline) automatically
    // - Including '\n' causes scanf to wait for a non-whitespace input (e.g., pressing Enter again)
    // - This leads to bugs and hanging behavior, especially with char or string input later
    scanf("%f", &radius); // %f expects a float address

    // Echo the entered radius with precision of 2 decimal points
    printf("Entered radius is %.2f\n", radius);

    // Calculate properties of the circle
    diameter = 2 * radius;

    // ⚠️ pow() returns a double, so internally this is double precision
    //     which gets implicitly converted back to float.
    //     For radius squared, it's more efficient to use: radius * radius
    area = pi * pow(radius, 2);

    // Circumference formula: 2πr
    circum = 2 * pi * radius;

    // Output all computed values
    printf("Diameter of your circle is %.2f\n", diameter);
    printf("Area of your circle is %.2f\n", area);
    printf("Circumference of your circle is %.2f\n", circum);

    // Sample output:
    // Enter the radius of the circle: 18
    // Entered radius is 18.00
    // Diameter of your circle is 36.00
    // Area of your circle is 1017.36
    // Circumference of your circle is 113.04

    return 0;
}
