#include <stdio.h>

/*
    📘 FUNCTION PROTOTYPES (DECLARATIONS)
    -------------------------------------
    ➤ A **function prototype** tells the compiler:
        - the name of the function,
        - its return type,
        - and the types of its parameters.
    
    ➤ Prototypes are **required** if:
        - The function is called **before** its actual definition in the code.

    ➤ Syntax:
        return_type function_name(type1 param1, type2 param2);

    🔧 Purpose:
        ✓ Informs the compiler what to expect
        ✓ Enables function call before actual definition
        ✓ Helps detect type mismatch errors early

    🔴 Without a prototype, early function calls may result in:
        - compilation errors
        - undefined behavior
*/


// ✅ FUNCTION PROTOTYPES:
void greet();                            // No parameters, no return value
int add(int, int);                       // Two int parameters, returns int
float divide(float, float);             // Two float parameters, returns float
void printResult(char operation, float value); // Prints result, no return


int main() {
    // 🔁 Function calls before their definitions
    greet();  // valid due to prototype

    int x = 12, y = 6;
    int sum = add(x, y);  // call before function is defined
    printResult('+', sum);

    float a = 20.0f, b = 4.0f;
    float result = divide(a, b);  // call before definition
    printResult('/', result);

    return 0;
}


// ✅ FUNCTION DEFINITIONS

void greet() {
    printf("👋 Welcome to the Function Prototype Example!\n\n");
}

int add(int a, int b) {
    return a + b;
}

float divide(float num, float den) {
    if (den != 0.0f)
        return num / den;
    else {
        printf("⚠️ Error: Division by zero\n");
        return 0.0f;
    }
}

void printResult(char operation, float value) {
    printf("Result of operation '%c' is: %.2f\n\n", operation, value);
}
