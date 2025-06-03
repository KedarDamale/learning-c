#include <stdio.h>

// 🔵 GLOBAL VARIABLE
// --------------------
// ➤ Declared outside all functions
// ➤ Accessible from any function in the file (unless shadowed)
// ➤ Stored in the **data segment** of memory (lifetime = entire program)
int globalCounter = 0;  // global variable

// ➕ Function to modify global variable
void incrementGlobal() {
    globalCounter++;  // accesses and modifies the global variable
    printf("Inside incrementGlobal(): globalCounter = %d\n", globalCounter);
}

// 🔁 Function demonstrating static variable
void staticExample() {
    // 🔴 STATIC LOCAL VARIABLE
    // --------------------------
    // ➤ Retains value between function calls
    // ➤ Initialized only once
    // ➤ Scope is local to the function
    // ➤ Stored in the **data segment**, not stack
    static int callCount = 0;

    callCount++;
    printf("staticExample() called %d times\n", callCount);
}

int main() {

    // 🟠 LOCAL VARIABLES
    // --------------------
    // ➤ Declared inside a function
    // ➤ Accessible **only** within that function
    // ➤ Stored on the **stack**
    // ➤ Lifetime = until function returns

    int mainVar = 10;
    printf("mainVar (local to main) = %d\n", mainVar);

    // 🔴 BLOCK SCOPE
    // ----------------
    // ➤ A variable declared inside a block `{}` has scope limited to that block
    // ➤ Block scope variables hide outer variables (shadowing)

    {
        int blockVar = 20;  // only visible inside this block
        printf("blockVar (inside inner block) = %d\n", blockVar);

        // Shadowing example
        int mainVar = 99;   // shadows mainVar in outer scope
        printf("mainVar (shadowed inside block) = %d\n", mainVar);
    }

    // printf("blockVar = %d\n", blockVar); ❌ Error: blockVar not visible here

    // Check value of mainVar after block
    printf("mainVar (outside block) = %d\n", mainVar); // shows 10, not 99

    // ✅ Call function to increment global variable
    incrementGlobal();
    incrementGlobal();

    // ✅ Call static variable function multiple times
    staticExample();  // call 1
    staticExample();  // call 2
    staticExample();  // call 3

    return 0;
}
