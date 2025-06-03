#include <stdio.h>

/*
    ==========================================================
    ENUMERATIONS (enum) IN C - COMPREHENSIVE NOTES
    ==========================================================

    1. WHAT IS enum?
    ----------------
    - 'enum' (short for enumeration) is a user-defined data type in C.
    - It is used to assign names to integral constants, making code more readable and maintainable.
    - Instead of using literal integers, you use descriptive names.

    2. WHY USE enum?
    ----------------
    - Makes code more readable by replacing magic numbers with meaningful names.
    - Easier to manage and maintain sets of related constants.
    - Improves type safety and debugging.
    - Can be used in switch-case statements for clarity.

    3. SYNTAX:
    -----------
        enum EnumName {
            CONSTANT1,
            CONSTANT2,
            CONSTANT3,
            ...
        };

    Example:
        enum Days {
            MONDAY,    // 0
            TUESDAY,   // 1
            WEDNESDAY, // 2
            THURSDAY,  // 3
            FRIDAY,    // 4
            SATURDAY,  // 5
            SUNDAY     // 6
        };

    4. UNDERLYING VALUES:
    ---------------------
    - By default, the first enumerator is assigned the value 0.
    - Each subsequent enumerator increments by 1 from the previous.
    - You can assign explicit values to enumerators.
    - If explicit values are assigned, subsequent unassigned enumerators increment from the last assigned value.

    Example:
        enum Colors {
            RED = 1,
            GREEN,     // 2
            BLUE = 5,
            YELLOW     // 6
        };

    5. DECLARING VARIABLES:
    -----------------------
        enum Days today;
        today = MONDAY;

    - You can also typedef enums for simpler usage:

        typedef enum {
            LOW,
            MEDIUM,
            HIGH
        } Priority;

        Priority p = HIGH;

    6. SIZE OF enum:
    ----------------
    - Enum variables are stored as integers internally.
    - Size depends on compiler but usually sizeof(enum) == sizeof(int).

    7. ADVANTAGES OF USING enum:
    -----------------------------
    • Improves code readability and intent.
    • Helps prevent invalid values by limiting the domain of variables.
    • Easier maintenance if constants need to change.
    • Can be used in switch statements for cleaner code.

    8. EXAMPLES AND USAGE IN PROGRAM
    ---------------------------------
*/

enum Weekday {
    MONDAY,     // 0
    TUESDAY,    // 1
    WEDNESDAY,  // 2
    THURSDAY,   // 3
    FRIDAY,     // 4
    SATURDAY,   // 5
    SUNDAY      // 6
};

typedef enum {
    LOW,
    MEDIUM,
    HIGH
} Priority;


int main() {
    // Declaring enum variable
    enum Weekday today = WEDNESDAY;
    
    printf("Today is day number: %d\n", today);
    // Prints 2 because WEDNESDAY corresponds to 2 by default

    // Assign explicit values
    enum Status {
        SUCCESS = 0,
        FAILURE = -1,
        PENDING = 5
    };

    enum Status jobStatus = PENDING;
    printf("Job status code: %d\n", jobStatus);

    // Using typedef enum
    Priority taskPriority = HIGH;

    if (taskPriority == HIGH) {
        printf("Task priority is HIGH\n");
    }

    // Enum in switch-case
    switch (today) {
        case MONDAY:
            printf("Start of the work week.\n");
            break;
        case FRIDAY:
            printf("Almost weekend!\n");
            break;
        case SATURDAY:
        case SUNDAY:
            printf("Weekend vibes!\n");
            break;
        default:
            printf("Midweek days.\n");
    }

    return 0;
}

/*
    SUMMARY:
    --------
    - enum lets you define named integer constants.
    - By default, starts at 0 and increments by 1.
    - Can assign custom integer values.
    - Improves readability and reduces magic numbers.
    - Can be combined with typedef for convenience.
    - Widely used for state machines, options, modes, flags, etc.
*/
