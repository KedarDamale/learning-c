#include <stdio.h>

/*
    📘 FUNCTIONS IN C
    ------------------
    ➤ A function is a block of code that performs a specific task.
    ➤ It helps break down complex problems into smaller modules.
    ➤ Promotes **modularity**, **code reuse**, and **easier debugging**.

    🔖 TYPES OF FUNCTIONS (BASED ON ARGUMENTS AND RETURN TYPE):

    1. No argument, no return value
    2. Argument(s), no return value
    3. No argument, return value
    4. Argument(s), return value
*/


// 1️⃣ NO ARGUMENT, NO RETURN VALUE
void greet() {
    printf("Hello! This is a basic C function.\n");
    printf("This function takes no arguments and returns nothing.\n\n");
}


// 2️⃣ ARGUMENT(S), NO RETURN VALUE
void displaySum(int a, int b) {
    int sum = a + b;
    printf("Sum of %d and %d is: %d\n\n", a, b, sum);
}


// 3️⃣ NO ARGUMENT, RETURNS VALUE
int getNumberFromUser() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;  // Function returns the number entered by user
}


// 4️⃣ ARGUMENT(S), RETURNS VALUE
int multiply(int x, int y) {
    return x * y;  // Returns product
}


/*
    ✅ FUNCTION DECLARATIONS (aka Function Prototypes)
    --------------------------------------------------
    ➤ Optional, but required if function is called before its definition.
    ➤ Syntax:
        return_type function_name(type1 arg1, type2 arg2);

    Example:
        int add(int, int);
*/


// 5️⃣ RECURSIVE FUNCTION (Function calling itself)
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);  // recursive call
}


int main() {
    // 📍 Calling 1st function (No args, No return)
    greet();

    // 📍 Calling 2nd function (With args, No return)
    displaySum(5, 10);

    // 📍 Using 3rd function (No args, returns value)
    int num = getNumberFromUser();
    printf("You entered: %d\n\n", num);

    // 📍 Using 4th function (With args, returns value)
    int product = multiply(4, 6);
    printf("Product of 4 and 6 is: %d\n\n", product);

    // 📍 Using Recursive Function
    int fact = factorial(5);
    printf("Factorial of 5 is: %d\n", fact);

    return 0;
}

/*
    📌 SUMMARY TABLE:

    | Case | Arguments | Return | Example         |
    |------|-----------|--------|-----------------|
    |  1   |    ❌      |   ❌   | void greet()    |
    |  2   |    ✅      |   ❌   | void displaySum(int, int) |
    |  3   |    ❌      |   ✅   | int getNumber() |
    |  4   |    ✅      |   ✅   | int multiply(int, int) |
    |  5   |   Recursion (function calling itself) | factorial(int) |

    🧠 FUNCTION STRUCTURE:
    ---------------------
    return_type function_name(parameters) {
        // function body
        return value (if any);
    }

    🧠 WHY USE FUNCTIONS?
    ---------------------
    ✓ Reduce redundancy
    ✓ Increase clarity and modularity
    ✓ Easier testing and debugging
    ✓ Encourages reusability
*/


