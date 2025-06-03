#include <stdio.h>

int main() {

    // switch is a control statement used to select one out of multiple code blocks to be executed
    // It is an alternative to writing multiple if-else-if conditions

    int day = 1;

    // The switch expression must be of type: int or char (not float or string)
    // The expression's result is compared with each case label
    switch (day) {
        case 1:  // If day == 1, this block is executed
            printf("Monday\n");
            break;  // break terminates the switch block; control moves outside the switch
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;

        // Default is optional but recommended — acts like the final else in if-else chain
        default:
            printf("You entered something wrong\n");
            break;
    }

    /*
        === NOTES ON SWITCH CASES ===

        ✔ switch only works with **discrete values** (e.g., int, char) — NOT strings or floating point values.
        ✔ Each 'case' must have a unique constant value — duplicates will cause a compile-time error.
        ✔ Omitting 'break' leads to **fall-through**, meaning:
              If a case matches and there's no break, all following cases are also executed until a break is found.
              This behavior is sometimes used intentionally, but often it leads to logic bugs.
        ✔ 'default' is executed only if **no case matches**. Think of it like the 'else' in an if-else ladder.
        ✔ You can also use characters in switch:
              ```c
              char option = 'a';
              switch(option) {
                  case 'a': //...
              ```
        ✔ Best practice is to always include 'break' unless you *intentionally* want fall-through.
    */

    return 0;
}
