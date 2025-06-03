#include <stdio.h>

int main() {
    int age = 20;
    int hasID = 1; // 1 = true, 0 = false

    /*
        === NESTED IF STATEMENTS IN C ===

        🔹 A nested `if` means using one `if` (or if-else) inside another.
        🔹 Useful when decisions depend on multiple levels of conditions.
        🔹 Each inner `if` is executed **only if** the outer `if`'s condition is true.
        🔹 Nested `if`s can be inside both `if` and `else` blocks.
    */

    // Outer condition — checks if person is above or equal to 18
    if (age >= 18) {
        // Inner condition — checks if person has an ID
        if (hasID) {
            printf("Entry allowed: You are an adult and have a valid ID.\n");
        } else {
            printf("Entry denied: You must carry an ID even if you're an adult.\n");
        }
    } else {
        printf("Entry denied: You must be at least 18 years old.\n");
    }

    /*
        === NOTES / KEY RULES FOR NESTED IF ===

        ✔ You can nest any number of `if` or `if-else` statements.
        ✔ Maintain indentation for clarity — otherwise logic becomes confusing.
        ✔ Use `else if` if there are mutually exclusive conditions at the same level.
        ✔ Always use curly braces `{}` in nested blocks even for single statements — helps avoid bugs.
        
        🧠 For example:
        if (a) 
            if (b)
                do_something();
        // Without braces, it's not clear if outer or inner 'if' controls the body

        ✔ Nested ifs are NOT loops. They execute once if condition is true — no repetition.

        ✔ Example use-cases of nested if:
            - Login system: check if user exists, then check password
            - E-commerce: check if user is logged in, then check stock availability
            - Admission: check eligibility, then check document submission
    */

    return 0;
}
