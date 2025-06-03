#include <stdio.h>

/*
    ========================================
    ARRAYS OF STRUCTS - COMPREHENSIVE NOTES
    ========================================

    1. WHAT IS AN ARRAY OF STRUCTS?
    --------------------------------
    - It is simply an array where each element is a struct.
    - Useful to store multiple records of the same kind.
    - Like having a list of employees, students, points, etc.

    2. WHY USE ARRAYS OF STRUCTS?
    ------------------------------
    - Organizes multiple structured data items together.
    - Allows easy iteration, searching, and manipulation.
    - Enables batch processing of records.

    3. SYNTAX TO DECLARE:
    ----------------------
    struct StructName arrayName[arraySize];

    Example:
        struct Employee {
            int id;
            char name[50];
            float salary;
        };

        struct Employee employees[100]; // array to hold 100 employees

    4. ACCESSING MEMBERS:
    ---------------------
    Use array index with dot operator:
    employees[0].id = 101;
    strcpy(employees[0].name, "Alice");
    employees[0].salary = 50000.0f;

    5. LOOPING THROUGH ARRAY OF STRUCTS:
    -------------------------------------
    for(int i = 0; i < size; i++) {
        printf("%d %s %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    6. PASSING ARRAY OF STRUCTS TO FUNCTIONS:
    ------------------------------------------
    You can pass the array and its size to functions for processing.

*/

struct Employee {
    int id;
    char name[50];
    float salary;
};

void printEmployees(struct Employee arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", arr[i].id, arr[i].name, arr[i].salary);
    }
}

int main() {
    // Declare and initialize array of structs with 3 employees
    struct Employee employees[3] = {
        {1001, "Alice", 55000.0f},
        {1002, "Bob", 48000.0f},
        {1003, "Charlie", 62000.0f}
    };

    // Access and modify a member of one struct in the array
    employees[1].salary = 50000.0f; // Bob gets a raise

    // Print employee details using loop
    printf("Employee List:\n");
    printEmployees(employees, 3);

    // Example: Adding new employee manually
    employees[2].id = 1004; // Overwriting Charlie's record as example
    strcpy(employees[2].name, "David");
    employees[2].salary = 58000.0f;

    printf("\nAfter updating third employee:\n");
    printEmployees(employees, 3);

    return 0;
}

/*
    SUMMARY:
    ---------
    • Array of structs stores multiple structured records.
    • Access members with array[index].member syntax.
    • Initialize array of structs at declaration or later.
    • Use loops to process all structs in array.
    • Can pass arrays of structs to functions.
*/
