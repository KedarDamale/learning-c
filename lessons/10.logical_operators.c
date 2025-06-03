#include <stdio.h>

int main() {
    /*
        🔍 LOGICAL OPERATORS IN C
        -------------------------

        Logical operators are used to form compound conditions (used mostly in decision-making).

        There are 3 main logical operators:
        
        1. && (Logical AND)
            ➤ Returns true (1) only if **both** operands are true.
            ➤ false && false → false
            ➤ true  && false → false
            ➤ true  && true  → true

        2. || (Logical OR)
            ➤ Returns true (1) if **at least one** operand is true.
            ➤ false || false → false
            ➤ true  || false → true
            ➤ true  || true  → true

        3. ! (Logical NOT)
            ➤ Returns the opposite of the condition.
            ➤ !true  → false
            ➤ !false → true

        NOTE:
        ➤ In C, 0 is considered **false**
        ➤ Any non-zero value is considered **true**
    */

    int age = 22;
    int hasLicense = 1; // 1 means true (yes), 0 means false (no)
    int isDrunk = 0;    // 0 means not drunk

    // 🟩 Logical AND: All conditions must be true to execute the block
    if (age >= 18 && hasLicense == 1) {
        printf("✅ User is eligible to drive.\n");
    }

    // 🟥 Logical AND with one false condition
    if (age >= 18 && hasLicense == 0) {
        printf("❌ You’re 18+ but don’t have a license.\n");
    }

    // 🟨 Logical OR: At least one condition should be true
    if (age < 18 || hasLicense == 0) {
        printf("⚠️ Either you are underage or don't have a license.\n");
    }

    // ❗ Logical NOT: Inverts the condition
    if (!isDrunk) {
        printf("✅ You are not drunk.\n");
    }

    // Combined Example: Check if person can drive safely
    if (age >= 18 && hasLicense == 1 && !isDrunk) {
        printf("🚗 You are allowed to drive safely.\n");
    } else {
        printf("⛔ You are not allowed to drive.\n");
    }

    /*
        🧠 SHORT-CIRCUITING BEHAVIOR:

        ➤ Logical AND (&&):
            - If the first condition is false, the second is **not evaluated** (because result is already false).
        ➤ Logical OR (||):
            - If the first condition is true, the second is **not evaluated** (because result is already true).
        
        This is useful for safe checks like:
            if (ptr != NULL && ptr->value > 0)
    */

    return 0;
}
