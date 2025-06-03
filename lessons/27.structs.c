#include <stdio.h>

/*
    ==========================================================
    STRUCTS IN C - COMPREHENSIVE NOTES
    ==========================================================

    1. WHAT IS A STRUCT?
    --------------------
    - A struct (short for structure) is a user-defined composite data type.
    - It groups together variables of different types under a single name.
    - Useful to represent a "record" or "object" with multiple attributes.
    - Think of it as a container holding related data fields.

    2. WHY USE STRUCTS?
    --------------------
    - To combine related data into one logical unit.
    - Makes code more organized and easier to maintain.
    - Helps model real-world entities (like student, employee, point).
    - Pass complex data conveniently to functions.

    3. SYNTAX TO DEFINE STRUCT:
    ---------------------------
    struct StructName {
        data_type member1;
        data_type member2;
        ...
    };

    4. CREATING VARIABLES:
    ----------------------
    struct StructName variableName;

    5. ACCESSING MEMBERS:
    ----------------------
    Use the dot operator '.' to access individual members:
    variableName.member1 = value;

    6. EXAMPLE STRUCT DECLARATION:
    -------------------------------
    struct Point {
        int x;
        int y;
    };

    7. STRUCTS AND FUNCTIONS:
    --------------------------
    - You can pass structs to functions by value or by reference (using pointers).
    - Passing by reference avoids copying large structs.

    8. STRUCTS WITH typedef:
    -------------------------
    - You can use typedef to avoid writing 'struct' keyword each time.

    typedef struct {
        int id;
        char name[50];
        float salary;
    } Employee;

    Employee emp1;

    9. INITIALIZING STRUCTS:
    ------------------------
    - You can initialize while declaring:
      struct Point p = {10, 20};

    - You can also assign member-wise:
      p.x = 10;
      p.y = 20;

    10. NESTED STRUCTS:
    -------------------
    - A struct can have members that are themselves structs.

*/

/* Example struct for a Point in 2D space */
struct Point {
    int x;
    int y;
};

/* Typedef struct example for Employee */
typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

/* Function to print point details */
void printPoint(struct Point p) {
    printf("Point coordinates: (%d, %d)\n", p.x, p.y);
}

/* Function to give a raise to an employee */
void giveRaise(Employee *emp, float amount) {
    emp->salary += amount; // use -> because emp is a pointer
}

int main() {
    // Creating and initializing struct Point variable
    struct Point p1 = {10, 20};
    printPoint(p1);

    // Modifying struct members
    p1.x = 30;
    p1.y = 40;
    printPoint(p1);

    // Using typedef struct Employee
    Employee emp1 = {1001, "Alice", 50000.0f};
    printf("Employee: %s, ID: %d, Salary: %.2f\n", emp1.name, emp1.id, emp1.salary);

    // Giving raise using function and pointer to struct
    giveRaise(&emp1, 5000.0f);
    printf("After raise, salary: %.2f\n", emp1.salary);

    // Nested struct example
    struct Rectangle {
        struct Point topLeft;
        struct Point bottomRight;
    };

    struct Rectangle rect = {{0, 10}, {10, 0}};
    printf("Rectangle Top Left: (%d, %d)\n", rect.topLeft.x, rect.topLeft.y);
    printf("Rectangle Bottom Right: (%d, %d)\n", rect.bottomRight.x, rect.bottomRight.y);

    return 0;
}

/*
    SUMMARY:
    --------
    • Structs group multiple variables under one name.
    • Members can be different types.
    • Access members with '.' operator.
    • Pass structs to functions by value or pointer.
    • Use typedef to simplify struct type names.
    • Support nested structs for complex data.
    • Great for modeling real-world entities.

*/
